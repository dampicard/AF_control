{
  "interface_": {
    "type": "SYSTEM",
    "portSpecifications": []
  },
  "blockStates": [
    {
      "isInitial": true,
      "name": "State1",
      "type": {
        "type": "STATE",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "IN",
            "xRatio": 0.5,
            "yRatio": 0.0,
            "simuNumber": 0
          },
          {
            "name": "2",
            "direction": "OUT",
            "xRatio": 0.5,
            "yRatio": 1.0,
            "simuNumber": 0
          },
          {
            "name": "Action",
            "direction": "ACTION",
            "xRatio": 1.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "x": -40.0,
      "y": -40.0,
      "width": 80.0,
      "height": 80.0,
      "simuStartIndex": 0
    }
  ],
  "blockActions": [],
  "blockTransitions": [
    {
      "condition": "True",
      "name": "Transition1",
      "type": {
        "type": "TRANSITION",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "IN",
            "xRatio": 0.5,
            "yRatio": 0.0,
            "simuNumber": 0
          },
          {
            "name": "2",
            "direction": "OUT",
            "xRatio": 0.5,
            "yRatio": 1.0,
            "simuNumber": 0
          }
        ]
      },
      "x": -26.666666,
      "y": -2.5,
      "width": 53.333332,
      "height": 5.0,
      "simuStartIndex": 0
    }
  ],
  "connections": []
}