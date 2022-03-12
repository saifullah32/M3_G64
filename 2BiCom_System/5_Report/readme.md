#  About the BiCom System
## Description
 * This Project is an __BiCom System__,and is designed to remotely know the statues of your automobiles, BiCom System operates by broadcasting radio waves on a particular frequency Bidirectionally.

---

## Identifying features
 * It shall print __window status__ of the car when Button is pressed ONCE
 * It shall print __alarm status__ the car when Button is pressed TWICE
 * It shall print __car battery info__ when the Button is pressed THREE times
 * It shall print __door status__ of the car when the Button is pressed FOUR times

## State of art
 * The main focus point here is knowing status of the car remotely
 * Now this two features is made into one product i.e. __BiCom System__
 * As the world PACE-FORWARD our technology needs to catch up to the world  

## Requirements

### High Level Requirements

| ID | High Level Requirements |
| -------- | -------------- |
| HLR1 | It shall print WINDOW STATUS OF THE CAR |
| HLR2 | It shall print ALARM STATUS OF THE CAR |
| HLR3 | It shall print CAR BATTERY INFO OF THE CAR |
| HLR4 | It shall print DOOR STATUS OF THE CAR |


### Low Level Requirements

| ID | Low Level Requirements for HLR1|       |ID | Low Level Requirements for HLR2|
| ----- | ----- | ---- |----- | ----- |
| LLR1.1 | If the User Button is pressed ONCE, ON LED ORANGE, GREEN along with other LED's |     |LLR2.1 | If the User Button is pressed TWICE, OFF LED ORANGE, GREEN along with other LED's  |
| LLR1.2 | If the User Button is pressed ONCE, ON LED RED, BLUE along with other LED's|     |LLR2.2 | If the User Button is pressed TWICE, OFF LED RED, BLUE along with other LED's |



| ID | Low Level Requirements for HLR3|  |ID | Low Level Requirements for HLR4|
| -------- | -------------- | ---- | -------- | -------------- |
| LLR3.1 |  If the User Button is pressed THREE times, ON All LED's in CLOCKWISE manner  |  | LLR4.1 | If the User Button is pressed FOUR times, ON All LED's in ANTI-CLOCKWISE manner |
| LLR3.2 | i.e. GREEN➡ORANGE➡RED➡BLUE➡GREEN |  | LLR4.2 | i.e. GREEN➡BLUE➡RED➡ORANGE➡GREEN |
# DESIGN
## Behavioural diagram
### High level FLOW CHART behavioural diagram:
![HLFCBD](https://raw.githubusercontent.com/Vartik-Vats/Module3_Group-43/main/2_BiCom-System/5_ImagesAndVideos/hlflowchart.png)
### Low level FLOW CHART behavioural diagram:
![LLFCBD](https://raw.githubusercontent.com/Vartik-Vats/Module3_Group-43/main/2_BiCom-System/5_ImagesAndVideos/llflowchart.png)
## Structural diagram
### High level structural diagram
![HLSD](https://raw.githubusercontent.com/Vartik-Vats/Module3_Group-43/main/2_BiCom-System/5_ImagesAndVideos/hlstructural.png)
### Low level structural diagram
![LLSD](https://raw.githubusercontent.com/Vartik-Vats/Module3_Group-43/main/2_BiCom-System/5_ImagesAndVideos/llstructural.png)
---
# Test plan and output

### Test plan is created and verified

## HIGH LEVEL TEST PLAN / Integrated test plan

| Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 01 | Print Window Status | USER BUTTON PRESS ONCE  | Shall Print Window Status of the car | Shall Print Window Status the of car  | 
| 02 | Print Alarm Status | USER BUTTON PRESS TWICE | Shall Print Alarm Status of the car |  Shall Print Alarm Status of the car | 
| 03 | Print Car Battery Info | USER BUTTON PRESS THREE TIMES | Shall Print Car Battery Info | Shall Print Car Battery Info |
| 04 | Print Door status | Shall Print Door status of the car |  | Shall Print Door status of the car  |

## LOW LEVEL TEST PLAN

| Test ID (for Print Window Status)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for Print Window Status | USER BUTTON PRESS ONCE  | Shall ON all LED's  | Shall ON all LED's  | ✅ |
| 02 | Check for Print Alarm Status | USER BUTTON PRESS TWICE  | Shall OFF all LED's  | Shall OFF all LED's  | ✅ |
| 03 | Check for Print Car Battery Info | USER BUTTON PRESS THREE TIMES | Shall ON LED's ONCE clockwise  |  Shall ON LED's ONCE clockwise  | ✅ |
| 04 | Check for Print Door status | USER BUTTON PRESS FOUR TIMES | Shall ON LED's once anti-clockwise  |  Shall ON LED's once anti-clockwise  | ✅ |
| 05 | Check for btn_press() | counts no of button press  | 1/2/3/4 | 1/2/3/4 | ✅ |
