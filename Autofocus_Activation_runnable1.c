{
  "interface_": {
    "operation": "SYSTEM",
    "portSpecifications": []
  },
  "blocks": [
    {
      "name": "Gain1",
      "type": {
        "operation": "GAIN",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "IN",
            "xRatio": 0.0,
            "yRatio": 0.5,
            "simuNumber": 0
          },
          {
            "name": "2",
            "direction": "OUT",
            "xRatio": 1.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [
        {
          "name": "Gain",
          "type": "http://www.w3.org/2001/XMLSchema#double",
          "value": "1"
        }
      ],
      "x": -22.5,
      "y": -17.5,
      "width": 45.0,
      "height": 35.0,
      "simuStartIndex": 0
    },
    {
      "name": "Gain2",
      "type": {
        "operation": "GAIN",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "IN",
            "xRatio": 0.0,
            "yRatio": 0.5,
            "simuNumber": 0
          },
          {
            "name": "2",
            "direction": "OUT",
            "xRatio": 1.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [
        {
          "name": "Gain",
          "type": "http://www.w3.org/2001/XMLSchema#double",
          "value": "1"
        }
      ],
      "x": -22.5,
      "y": -17.5,
      "width": 45.0,
      "height": 35.0,
      "simuStartIndex": 0
    },
    {
      "name": "MinMax1",
      "type": {
        "operation": "MINMAX",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "IN",
            "xRatio": 0.0,
            "yRatio": 0.5,
            "simuNumber": 0
          },
          {
            "name": "2",
            "direction": "OUT",
            "xRatio": 1.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [
        {
          "name": "Minimum",
          "type": "http://www.w3.org/2001/XMLSchema#double",
          "value": ""
        },
        {
          "name": "Maximum",
          "type": "http://www.w3.org/2001/XMLSchema#double",
          "value": ""
        }
      ],
      "x": -30.0,
      "y": -20.0,
      "width": 60.0,
      "height": 40.0,
      "simuStartIndex": 0
    },
    {
      "name": "MinMax2",
      "type": {
        "operation": "MINMAX",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "IN",
            "xRatio": 0.0,
            "yRatio": 0.5,
            "simuNumber": 0
          },
          {
            "name": "2",
            "direction": "OUT",
            "xRatio": 1.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [
        {
          "name": "Minimum",
          "type": "http://www.w3.org/2001/XMLSchema#double",
          "value": ""
        },
        {
          "name": "Maximum",
          "type": "http://www.w3.org/2001/XMLSchema#double",
          "value": ""
        }
      ],
      "x": -30.0,
      "y": -20.0,
      "width": 60.0,
      "height": 40.0,
      "simuStartIndex": 0
    }
  ],
  "ios": [
    {
      "name": "screen_distance",
      "type": {
        "operation": "PORT_SYS_IN",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "OUT",
            "xRatio": 1.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [],
      "x": 0.0,
      "y": 0.0,
      "width": 30.0,
      "height": 20.0,
      "simuStartIndex": 0
    },
    {
      "name": "activation",
      "type": {
        "operation": "PORT_SYS_OUT",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "IN",
            "xRatio": 0.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [],
      "x": 0.0,
      "y": 0.0,
      "width": 30.0,
      "height": 20.0,
      "simuStartIndex": 0
    },
    {
      "name": "read_switch_status",
      "type": {
        "operation": "PORT_SYS_IN",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "OUT",
            "xRatio": 1.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [],
      "x": 0.0,
      "y": 0.0,
      "width": 30.0,
      "height": 20.0,
      "simuStartIndex": 0
    }
  ],
  "connections": []
}