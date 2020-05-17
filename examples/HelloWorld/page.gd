{
	"font": [
		{
			"name": "Roboto_16",
			"size": 16,
			"range": "0x0020-0x007F",
			"variable": "lv_font_roboto_16",
			"file": "font/Roboto-Regular.ttf"
		},
		{
			"name": "supermarket_40",
			"file": "supermarket.ttf",
			"size": 40,
			"range": "0x0020-0x007F,0x0E00-0x0E7F"
		},
		{
			"name": "supermarket_140",
			"file": "supermarket.ttf",
			"size": 140,
			"range": "0x0E00-0x0E7F"
		}
	],
	"page": [
		{
			"name": "index",
			"background": {
				"main_color": "#FF0000",
				"grad_color": "#FFF700"
			},
			"component": {
				"component-0": {
					"name": "Label",
					"property": {
						"name": "txt1",
						"parent": "",
						"hidden": 1,
						"define": 0,
						"alignX": 1,
						"alignY": 1,
						"x": 0,
						"y": -60,
						"width": 0,
						"height": 0,
						"text": "สวัสดี",
						"text_align": 0,
						"color": "#FFFFFF",
						"mode": 0,
						"font": "supermarket_140"
					}
				},
				"component-2": {
					"name": "Object",
					"property": {
						"name": "obj1",
						"parent": "",
						"hidden": 1,
						"define": 0,
						"alignX": 1,
						"alignY": 1,
						"x": 0,
						"y": 50,
						"width": 320,
						"height": 20,
						"main_color": "#FFF700",
						"grad_color": "#FF0000",
						"radius": 10,
						"opacity": 255,
						"border_width": 2,
						"border_color": "#FFFFFF",
						"border_opacity": 255,
						"shadow_width": 4,
						"shadow_color": "#000000",
						"shadow_type": 1
					}
				},
				"component-3": {
					"name": "Label",
					"property": {
						"name": "txt3",
						"parent": "",
						"hidden": 1,
						"define": 0,
						"alignX": 1,
						"alignY": 1,
						"x": 0,
						"y": 50,
						"width": 300,
						"height": 80,
						"text": "ยินดีต้อนรับสู่แพลตฟอร์ม IOXGD",
						"text_align": 0,
						"color": "#000000",
						"mode": 4,
						"font": "supermarket_40"
					}
				}
			}
		}
	]
}