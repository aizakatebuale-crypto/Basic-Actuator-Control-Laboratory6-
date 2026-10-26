# Laboratory Activity 6: Basic Actuator Control

This project demonstrates how to interface a DC motor using a motor driver breakout module (DRV8833 / TB6612FNG type driver) controlled by a micro-controller (ESP32). The system uses a push button to toggle the motor between running and coasting (stop) modes.

---

## Setup Documentation & Wiring Evidence

* **Microcontroller:** ESP32 powered via USB.
* **Power Source:** External AA battery pack connected to driver `VM` and `GND`.
* **Connections Verified:** Motor outputs wired to DC fan motor, push button connected with internal pull-up logic.

### Wiring Evidence & Circuit Photos
* **Video Demonstration:** 

https://github.com/user-attachments/assets/9f8b0a7e-36ae-4c97-8f19-487f04cd845b


---

## Results & Observed Behavior

* **Button-Controlled Run/Coast Behavior:** 
  * **Button Pressed:** Pin signal triggers logic HIGH, turning the motor **ON**.
  * **Button Released:** Driver signal drops to LOW, allowing the fan to **COAST** smoothly to a natural stop instead of fast-braking.

* **Serial Monitor Logs:**
  ```text
  Motor OFF (coast)
  Motor ON
  Motor OFF (coast)
  Motor ON

  <img width="1536" height="2048" alt="image" src="https://github.com/user-attachments/assets/823396e1-04f8-4fce-97e6-6288b3a7752b" />

