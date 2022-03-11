# RKE (Remote Keyless Entry)
## Introduction
Remote keyless Entry system is abbreviated as RKE. It's a proximity sensor that detects when a key is within a particular range.
Modern automobiles have a lot of them. When you have an RKS system, it is quite easy to get into your automobile.
You do not need to remove your key; simply stroll to your car while holding the key in your pocket and unlock the door.
In this it allows you to access your car or building without using a traditional mechanical key. "Remote keyless system" is sometimes known as "keyless entry" or "remote central locking" (RKS). It's a key that can be activated by a portable device or by being in close proximity to it. It functions similarly to a typical car key, but without the requirement for physical contact. When the remote is within range of the car, pressing a button on the remote will, lock and unlock your car or your system.
## Description
* Remote keyless entry (RKE) system is designed to remotely lock or unlock access to automobiles.
* RKE operates by broadcasting radio waves on a particular frequency unidirectionally,RKE systems implement encryption algorithms to prevent car thieves from intercepting and spoofing the telegrams.
---
## State of art
* Here the aim is to control the car remotely
* And also securing our car with a reliable Encryption System
* Now this two features are combined and made into one product i.e. RKE

## Identifying features
* It should Lock the car when Button is pressed ONCE
* It shall Unlock the car when Button is pressed TWICE
* t should activate/deactivate alarm when the Button is pressed THREE times
* It should approach light when the Button is pressed FOUR times
---
## Requirements

### High Level Requirements

| ID | High Level Requirements |
|:------:|:------|
| HLR1 | It shall Lock the car |
| HLR2 | It shall UNLOCK THE CAR |
| HLR3 | It shall ACTIVATE / DEACTIVATE THE ALARM |
| HLR4 | It shall approach the light |

### Low Level Requirements

| ID | Low level requirements for H1 |
|:------:|:-------:|
| LLR1 | If the User Button is pressed ONCE, ON LED ORANGE, GREEN along with other LED's |
| LLR2 | If the User Button is pressed ONCE, ON LED RED, BLUE along with other LED's |

| ID | Low level requirements for H2 |
|:------:|:-----:|
| LLR3 | If the User Button is pressed TWICE, OFF LED ORANGE, GREEN along with other LED's |
| LLR4 | If the User Button is pressed TWICE, OFF LED RED, BLUE along with other LED's |

| ID | Low level requirements for H3 |
|:-----:|:------:|
| LLR5 | If the User Button is pressed THREE times, ON All LED's in CLOCKWISE manner |
| LLR6 | i.e. GREEN➡ORANGE➡RED➡BLUE➡GREEN |

| ID | Low level requirements for H4 |
|:------:|:------:|
| LLR7 | If the User Button is pressed THREE times, ON All LED's in ANTI-CLOCKWISE manner |
| LLR8 | i.e. GREEN➡BLUE➡RED➡ORANGE➡GREEN |

