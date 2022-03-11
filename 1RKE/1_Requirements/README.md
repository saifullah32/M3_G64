# RKE (Remote Keyless Entry)
## Folder Structure
|Folder|Description|
|:-:|:--:|
|1_Requirement|Documents detailing requirements and research|
|2_Architecture|Documents specifying design details|
|3_Implementation|All code and documentation|
|4_TestPlanAndOutput|Documents with test plans|
|5_Report|Attach Report with all the scope of work|
|6_ImagesAndVideos|All images related to the project|
|7_Application|All information about app|

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

