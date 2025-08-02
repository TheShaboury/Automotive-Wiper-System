# Automotive Wiper System Controller - Model Based Development

## 🚗 Project Overview

A comprehensive **Model-Based Development (MBD)** project implementing an intelligent automotive wiper system controller using **MATLAB Simulink**. This project demonstrates real-world automotive software engineering practices with embedded system considerations.

## ✨ Key Features

### 🎛️ Multi-Mode Operation
- **Off Mode**: Complete system shutdown (0% PWM)
- **Manual Low Speed**: Fixed 40% PWM duty cycle
- **Manual High Speed**: Fixed 70% PWM duty cycle  
- **Automatic Mode**: Rain sensor-adaptive speed control

### 🌧️ Intelligent Rain Detection
- Real-time rain sensor integration
- Adaptive PWM control based on rain intensity
- 8-level speed mapping: [0, 40%, 45%, 50%, 55%, 60%, 65%, 70%]
- Smooth transitions to prevent motor stress

### 🛡️ Safety & Error Handling
- Rain sensor error detection and handling
- Automatic PWM shutdown on sensor failure
- Fault-tolerant system design

### ⏱️ Real-Time Performance
- 10ms execution cycle (100Hz)
- Scheduler-based architecture
- Deterministic timing for automotive compliance

## 🏗️ System Architecture

```
┌─────────────────┐    ┌──────────────────┐    ┌─────────────────┐
│   User Inputs   │───▶│  Wiper Controller │───▶│  Motor Outputs  │
│                 │    │                  │    │                 │
│ • WiperMode     │    │ • Mode Logic     │    │ • PWM Duty Cyc  │
│ • RainSnsrErr   │    │ • Error Handler  │    │ • WiperActv     │
│ • WiprSpdReq    │    │ • Speed Mapping  │    │                 │
└─────────────────┘    └──────────────────┘    └─────────────────┘
```

## 📋 Input/Output Specifications

### Inputs
| Signal | Type | Description | Values |
|--------|------|-------------|---------|
| `WiprMod` | Enum | Wiper operation mode | 0: Off, 1: Auto, 2: LoSpd, 3: HiSpd |
| `RainSnsrErr` | Boolean | Rain sensor error flag | 0: Normal, 1: Error |
| `WiprSpdReq` | Integer | Auto mode speed level | 0-7 (maps to PWM table) |

### Outputs
| Signal | Type | Description | Range |
|--------|------|-------------|-------|
| `WiprMotPwmDutyCyc` | Percentage | PWM duty cycle command | 0-100% |
| `WiprActv` | Boolean | Motor activation status | 0: Stop, 1: Running |

## 🔧 Technical Implementation

### Control Logic
- **Off Mode**: Direct PWM = 0%
- **Manual Modes**: Fixed PWM values (40%/70%)
- **Auto Mode**: 
  - Rain sensor error → PWM = 0%
  - Normal operation → Lookup table mapping
  - Smooth PWM transitions

### PWM Lookup Table (Auto Mode)
```matlab
Speed Level:  [0,  1,   2,   3,   4,   5,   6,   7  ]
PWM Duty:     [0, 40%, 45%, 50%, 55%, 60%, 65%, 70%]
```

## 🛠️ Tools & Technologies

- **MATLAB Simulink** - Model-based design and simulation
- **Stateflow** - State machine implementation
- **Simulink Coder** - Automatic C code generation
- **Model-Based Design** - V-model development process
- **Automotive Standards** - Real-time embedded considerations

## 📊 Project Structure

```
wiper-controller-mbd/
├── README.md
├── Automotive_Wiper_System.slx      # Main Simulink model
└── generated-code/                  # Auto-generated C code by the Embedded Coder
```

## 🧪 Testing & Validation

### Test Scenarios Covered
- ✅ Mode switching functionality
- ✅ Rain sensor error handling
- ✅ PWM smooth transitions
- ✅ Automatic speed adaptation
- ✅ System timing validation
- ✅ Edge case handling

### Validation Results
- **Real-time performance**: ✅ 10ms cycle time maintained
- **Safety compliance**: ✅ Fail-safe operation on sensor error
- **Smooth operation**: ✅ No abrupt PWM changes in auto mode

## 🎯 Skills Demonstrated

### Technical Skills
- Model-Based Development (MBD)
- MATLAB/Simulink proficiency
- Automotive software engineering
- Real-time embedded systems
- State machine design
- Safety-critical system development

### Engineering Practices
- Requirements-driven development
- Systematic testing and validation
- Code generation and deployment
- Documentation and version control

## 🚀 Future Enhancements

- [ ] Integration with CAN bus communication
- [ ] Advanced rain intensity algorithms
- [ ] Temperature compensation
- [ ] AUTOSAR-compliant implementation
- [ ] HIL (Hardware-in-Loop) testing setup
- [ ] ISO 26262 functional safety compliance

---

> *"Driving the future of automotive software through Model-Based Development"*
