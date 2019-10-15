#ifndef __R61408_CPP__
#define __R61408_CPP__

#include "R61408.h"

// =========== LCD ===========
// Pin Control
#ifdef LCD_RS
#undef LCD_RS
#endif
#ifdef LCD_WR
#undef LCD_WR
#endif

#define LCD_RS     25    // Data or Command
#define LCD_WR     24    // Write
#define LCD_BL     36    // Backlight

/*
 * ==== Wireing ====
 *  LCD  | K210(MCU)
 *   D0 <-> IO16
 *   D1 <-> IO17
 *   D2 <-> IO18
 *   D3 <-> IO19
 *   D4 <-> IO20
 *   D5 <-> IO21
 *   D6 <-> IO22
 *   D7 <-> IO23
 *   RS <-> IO25
 *   WR <-> IO24
 *   RD <-> 3V3
 *   CS <-> GND
 *   RESET <-> RESET
 *   SDA <-> 31
 *   SCL <-> 30
 */

/*
#define SET_LCD_WR_ACTIVE() *gpiohs->output_val.u32 |= (1<<(LCD_WR-16));
#define SET_LCD_WR_NON_ACTIVE() *gpiohs->output_val.u32 &= ~(1<<(LCD_WR-16));
*/
#define SET_LCD_RS_DATA() *gpiohs->output_val.u32 |= (1<<(LCD_RS-16));
#define SET_LCD_RS_COMMAND() *gpiohs->output_val.u32 &= ~(1<<(LCD_RS-16));
/*
#define SET_LCD_DATA(a) *gpiohs->output_val.u32=(*gpiohs->output_val.u32&0xFFFFFFF00)|((uint32_t)(a))

#define SET_LCD_WRITE() { SET_LCD_WR_NON_ACTIVE(); \
                          SET_LCD_WR_ACTIVE(); }

#define SET_LCD_WRITE_LOW_SPEED() { delayMicroseconds(100); \
                                    SET_LCD_WR_NON_ACTIVE(); \
                                    delayMicroseconds(100); \
                                    SET_LCD_WR_ACTIVE(); }
*/

#define LCD_DMA_CH DMAC_CHANNEL3
#define LCD_SPI_CH SPI_DEVICE_0

// =========== END of LCD ===========

R61408::R61408() { };

/*
void R61408::write_command(uint8_t c) {
  // SET_LCD_CS(0);

  // Set to Command
  SET_LCD_RS_COMMAND();

  // Set data output
  SET_LCD_DATA(c);

  // Write to LCD
  // SET_LCD_WRITE();
  SET_LCD_WRITE_LOW_SPEED();

  // SET_LCD_CS(1);
}

void R61408::Write_Data_int(uint16_t d) {
  // SET_LCD_CS(0);

  // Set to Data
  SET_LCD_RS_DATA();

  // Set data output
  SET_LCD_DATA(d);

  // Write to LCD
  // SET_LCD_WRITE();
  SET_LCD_WRITE_LOW_SPEED();

  // SET_LCD_CS(1);
}
*/

void R61408::write_command(uint8_t c) {
  SET_LCD_RS_COMMAND();

  spi_init(LCD_SPI_CH, SPI_WORK_MODE_0, SPI_FF_OCTAL, 8, 0);
  spi_init_non_standard(SPI_DEVICE_0, 8, 0, 0, SPI_AITM_AS_FRAME_FORMAT);
  spi_set_clk_rate(LCD_SPI_CH, 1E3);
  
  spi_send_data_normal_dma(LCD_DMA_CH, LCD_SPI_CH, SPI_CHIP_SELECT_0, &c, 1, SPI_TRANS_CHAR);

  dmac_wait_done(LCD_DMA_CH);
}

void R61408::Write_Data_int(uint16_t d) {
  SET_LCD_RS_DATA();
  
  spi_init(LCD_SPI_CH, SPI_WORK_MODE_0, SPI_FF_OCTAL, 8, 0);
  spi_init_non_standard(SPI_DEVICE_0, 8, 0, 0, SPI_AITM_AS_FRAME_FORMAT);
  spi_set_clk_rate(LCD_SPI_CH, 1E3);
  
  spi_send_data_normal_dma(LCD_DMA_CH, LCD_SPI_CH, SPI_CHIP_SELECT_0, &d, 1, SPI_TRANS_CHAR);

  dmac_wait_done(LCD_DMA_CH);
}

void R61408::init() {
	pinMode(35, OUTPUT);
	pinMode(17, OUTPUT);
	pinMode(18, OUTPUT);
	pinMode(19, OUTPUT);
	pinMode(20, OUTPUT);
	pinMode(21, OUTPUT);
	pinMode(22, OUTPUT);
	pinMode(23, OUTPUT);
	pinMode(24, OUTPUT);
	pinMode(25, OUTPUT);
	pinMode(LCD_BL, OUTPUT);
	
  /*
  // Data bus
  fpioa_set_function(16, FUNC_GPIOHS0);
  fpioa_set_function(17, FUNC_GPIOHS1);
  fpioa_set_function(18, FUNC_GPIOHS2);
  fpioa_set_function(19, FUNC_GPIOHS3);
  fpioa_set_function(20, FUNC_GPIOHS4);
  fpioa_set_function(21, FUNC_GPIOHS5);
  fpioa_set_function(22, FUNC_GPIOHS6);
  fpioa_set_function(23, FUNC_GPIOHS7);
  gpiohs_set_drive_mode(0, GPIO_DM_OUTPUT);
  gpiohs_set_drive_mode(1, GPIO_DM_OUTPUT);
  gpiohs_set_drive_mode(2, GPIO_DM_OUTPUT);
  gpiohs_set_drive_mode(3, GPIO_DM_OUTPUT);
  gpiohs_set_drive_mode(4, GPIO_DM_OUTPUT);
  gpiohs_set_drive_mode(5, GPIO_DM_OUTPUT);
  gpiohs_set_drive_mode(6, GPIO_DM_OUTPUT);
  gpiohs_set_drive_mode(7, GPIO_DM_OUTPUT);

  // Control bus
  fpioa_set_function(24, FUNC_GPIOHS8);
  fpioa_set_function(25, FUNC_GPIOHS9);
  gpiohs_set_drive_mode(8, GPIO_DM_OUTPUT);
  gpiohs_set_drive_mode(9, GPIO_DM_OUTPUT);

  SET_LCD_WR_ACTIVE();
  SET_LCD_RS_COMMAND();
  delay(1);
  */
  
  // Data bus (SPI)
  fpioa_set_function(35, FUNC_SPI0_D0);
  fpioa_set_function(17, FUNC_SPI0_D1);
  fpioa_set_function(18, FUNC_SPI0_D2);
  fpioa_set_function(19, FUNC_SPI0_D3);
  fpioa_set_function(20, FUNC_SPI0_D4);
  fpioa_set_function(21, FUNC_SPI0_D5);
  fpioa_set_function(22, FUNC_SPI0_D6);
  fpioa_set_function(23, FUNC_SPI0_D7);
  
  // Control bus
  fpioa_set_function(25, FUNC_GPIOHS9);
  gpiohs_set_drive_mode(9, GPIO_DM_OUTPUT);

  // fpioa_set_function(26, FUNC_SPI0_SS0);
  fpioa_set_function(24, FUNC_SPI0_SCLK);
  sysctl_set_spi0_dvp_data(1);
	
	// Backlight
  fpioa_set_function(LCD_BL, FUNC_GPIOHS10);
  gpiohs_set_drive_mode(10, GPIO_DM_OUTPUT);
  *gpiohs->output_val.u32 |= (1<<10);

  dmac_init();

  // SPI init
  spi_init(LCD_SPI_CH, SPI_WORK_MODE_0, SPI_FF_OCTAL, 8, 0);
  spi_init_non_standard(SPI_DEVICE_0, 8, 0, 0, SPI_AITM_AS_FRAME_FORMAT);
    
  // Write commend
  write_command(0x11); // exit_sleep_mode
  Write_Data_int(0x00);
  delay(40);
  write_command(0xB0); // MCAP: Manufacturer Command Access Protect
  Write_Data_int(0x04); // Manufacturer Command inputs are enabled - enabled all
  write_command(0xB3); // Frame Memory Access and Interface Setting (B3h)
  Write_Data_int(0x02); // The write start position is reset to the start of window address area to overwrite the subsequent data to the previous data.
  Write_Data_int(0x00); // OK !
  write_command(0xB6); // DSI Control (B6h)
  Write_Data_int(0x52);
  Write_Data_int(0x83); // Operating frequency (MHz), Min: 140 Max: 210
  write_command(0xB7); // I don't know !
  Write_Data_int(0x80);
  Write_Data_int(0x72);
  Write_Data_int(0x11);
  Write_Data_int(0x25);
  write_command(0xB8); // I don't know !
  Write_Data_int(0x00);
  Write_Data_int(0x0F);
  Write_Data_int(0x0F);
  Write_Data_int(0xFF);
  Write_Data_int(0xFF);
  Write_Data_int(0xC8);
  Write_Data_int(0xC8);
  Write_Data_int(0x02);
  Write_Data_int(0x18);
  Write_Data_int(0x10);
  Write_Data_int(0x10);
  Write_Data_int(0x37);
  Write_Data_int(0x5A);
  Write_Data_int(0x87);
  Write_Data_int(0xBE);
  Write_Data_int(0xFF);
  Write_Data_int(0x00);
  Write_Data_int(0x00);
  Write_Data_int(0x00);
  Write_Data_int(0x00);
  write_command(0xB9); // Backlight Control (2) (B9h)
  Write_Data_int(0x00);
  Write_Data_int(0x00);
  Write_Data_int(0x00);
  Write_Data_int(0x00);
  write_command(0xBD); // Resizing Control (BDh)
  Write_Data_int(0x00);
  write_command(0xC0); // Panel Driving Setting 1 (C0h)
  Write_Data_int(0x02);
  Write_Data_int(0x76);
  write_command(0xC1); // Panel Driving Setting 2 (C1h)
  Write_Data_int(0x63);
  Write_Data_int(0x31);
  Write_Data_int(0x00);
  Write_Data_int(0x27);
  Write_Data_int(0x27);
  Write_Data_int(0x32);
  Write_Data_int(0x12);
  Write_Data_int(0x28);
  Write_Data_int(0x4E);
  Write_Data_int(0x10);
  Write_Data_int(0xA5);
  Write_Data_int(0x0F);
  Write_Data_int(0x58);
  Write_Data_int(0x21);
  Write_Data_int(0x01);
  write_command(0xC2); // Display V-Timing Setting (C2h)
  Write_Data_int(0x28);
  Write_Data_int(0x06);
  Write_Data_int(0x06);
  Write_Data_int(0x01);
  Write_Data_int(0x03);
  Write_Data_int(0x00);
  write_command(0xC4); // Panel Driving Setting 3 (C4h)
  Write_Data_int(0x00);
  Write_Data_int(0x01);
  write_command(0xC6); // Outline Sharpening Control (C6h)
  Write_Data_int(0x00);
  Write_Data_int(0x00);
  write_command(0xC7); // Panel Driving Setting 4 (C7h)
  Write_Data_int(0x11);
  Write_Data_int(0x8D);
  Write_Data_int(0xA0);
  Write_Data_int(0xF5);
  Write_Data_int(0x27);
  write_command(0xC8); // Gamma Setting A Set (C8h)
    Write_Data_int(0x02);
    Write_Data_int(0x13);
    Write_Data_int(0x18);
    Write_Data_int(0x25);
    Write_Data_int(0x34);
    Write_Data_int(0x4E);
    Write_Data_int(0x36);
    Write_Data_int(0x23);
    Write_Data_int(0x17);
    Write_Data_int(0x0E);
    Write_Data_int(0x0C);
    Write_Data_int(0x02);
    Write_Data_int(0x02);
    Write_Data_int(0x13);
    Write_Data_int(0x18);
    Write_Data_int(0x25);
    Write_Data_int(0x34);
    Write_Data_int(0x4E);
    Write_Data_int(0x36);
    Write_Data_int(0x23);
    Write_Data_int(0x17);
    Write_Data_int(0x0E);
    Write_Data_int(0x0C);
    Write_Data_int(0x02);
    write_command(0xC9); // Gamma Setting B Set (C9h)
    Write_Data_int(0x02);
    Write_Data_int(0x13);
    Write_Data_int(0x18);
    Write_Data_int(0x25);
    Write_Data_int(0x34);
    Write_Data_int(0x4E);
    Write_Data_int(0x36);
    Write_Data_int(0x23);
    Write_Data_int(0x17);
    Write_Data_int(0x0E);
    Write_Data_int(0x0C);
    Write_Data_int(0x02);
    Write_Data_int(0x02);
    Write_Data_int(0x13);
    Write_Data_int(0x18);
    Write_Data_int(0x25);
    Write_Data_int(0x34);
    Write_Data_int(0x4E);
    Write_Data_int(0x36);
    Write_Data_int(0x23);
    Write_Data_int(0x17);
    Write_Data_int(0x0E);
    Write_Data_int(0x0C);
    Write_Data_int(0x02);
    write_command(0xCA); // Gamma Setting C Set (CAh)
    Write_Data_int(0x02);
    Write_Data_int(0x13);
    Write_Data_int(0x18);
    Write_Data_int(0x25);
    Write_Data_int(0x34);
    Write_Data_int(0x4E);
    Write_Data_int(0x36);
    Write_Data_int(0x23);
    Write_Data_int(0x17);
    Write_Data_int(0x0E);
    Write_Data_int(0x0C);
    Write_Data_int(0x02);
    Write_Data_int(0x02);
    Write_Data_int(0x13);
    Write_Data_int(0x18);
    Write_Data_int(0x25);
    Write_Data_int(0x34);
    Write_Data_int(0x4E);
    Write_Data_int(0x36);
    Write_Data_int(0x23);
    Write_Data_int(0x17);
    Write_Data_int(0x0E);
    Write_Data_int(0x0C);
    Write_Data_int(0x02);
    write_command(0xD0); // Power Setting (Charge Pump Setting) (D0h)
    Write_Data_int(0xA9);
    Write_Data_int(0x03);
    Write_Data_int(0xCC);
    Write_Data_int(0xA5);
    Write_Data_int(0x00);
    Write_Data_int(0x53);
    Write_Data_int(0x20);
    Write_Data_int(0x10);
    Write_Data_int(0x01);
    Write_Data_int(0x00);
    Write_Data_int(0x01);
    Write_Data_int(0x01);
    Write_Data_int(0x00);
    Write_Data_int(0x03);
    Write_Data_int(0x01);
    Write_Data_int(0x00);
    write_command(0xD1); // Power Setting (Switching Regulator Setting) (D1h)
    Write_Data_int(0x18);
    Write_Data_int(0x0C);
    Write_Data_int(0x23);
    Write_Data_int(0x03);
    Write_Data_int(0x75);
    Write_Data_int(0x02);
    Write_Data_int(0x50);
    write_command(0xD3); // Power Setting for Internal Mode (D3h)
    Write_Data_int(0x33);
    write_command(0xD5); // VPLVL/VNLVL Setting (D5h)
    Write_Data_int(0x2a);
    Write_Data_int(0x2a);
    write_command(0xDE); // VCOMDC Setting (DEh)
    Write_Data_int(0x01);
    Write_Data_int(0x51);//58
    write_command(0xE1); // set_DDB_write_control (E1h)
    Write_Data_int(0x00);
    Write_Data_int(0x00);
    Write_Data_int(0x00);
    Write_Data_int(0x00);
    Write_Data_int(0x00);
    Write_Data_int(0x00);
    write_command(0xE6); // VCOMDC Setting 2 (E6h)
    Write_Data_int(0x55); //58
    write_command(0xFA); // VDC_SEL Setting (FAh)
    Write_Data_int(0x01);
    write_command(0xB0); // MCAP: Manufacturer Command Access Protect
    Write_Data_int(0x04); // Manufacturer Command inputs are enabled - enabled all
    delay(40);
    write_command(0x35); // set_tear_on: 35h
    Write_Data_int(0x00); //
    write_command(0x44); // set_tear_scanline:44h
    Write_Data_int(0x00);
    write_command(0x36); // set_address_mode: 36h -> rotation
    Write_Data_int(0x00);
    write_command(0x3A); // set_pixel_format: 3Ah
    Write_Data_int(0x55); // 16 bits/pixel (65,536 colors)
    write_command(0x29); // set_display_on: 29h
    Write_Data_int(0x00);
    write_command(0x36); // set_address_mode: 36h
    Write_Data_int(0x60);
}

void R61408::startPushColor(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2) {
    write_command(0x002A);  
    Write_Data_int(x1>>8);      
    Write_Data_int(x1&0x00ff);
    Write_Data_int(x2>>8);      
    Write_Data_int(x2&0x00ff);
  
    write_command(0x002b);  
    Write_Data_int(y1>>8);      
    Write_Data_int(y1&0x00ff);
    Write_Data_int(y2>>8);      
    Write_Data_int(y2&0x00ff);

    write_command(0x002c);

    SET_LCD_RS_DATA();
}

/*
void R61408::pushColor(uint16_t color) {
    // Set data output
    SET_LCD_DATA(color >> 8);
    SET_LCD_WRITE();

    // Set data output
    SET_LCD_DATA(color & 0xFF);
    SET_LCD_WRITE();
}
*/

void R61408::pushColorBlock(uint16_t* color, uint32_t size) {
  SET_LCD_RS_DATA();
  
  spi_init(LCD_SPI_CH, SPI_WORK_MODE_0, SPI_FF_OCTAL, 16, 0);
  spi_init_non_standard(SPI_DEVICE_0, 16, 0, 0, SPI_AITM_AS_FRAME_FORMAT);
  spi_set_clk_rate(LCD_SPI_CH, 50E6);
  
  spi_send_data_normal_dma(LCD_DMA_CH, LCD_SPI_CH, SPI_CHIP_SELECT_0, color, size, SPI_TRANS_SHORT);

  dmac_wait_done(LCD_DMA_CH);
}

void R61408::stopPushColor() { }

R61408 lcd;

#endif