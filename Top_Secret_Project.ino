/*This, by the grace of God, will be my first top-secret project. The aim is to solve the recurrent problem of low laptop battery experienced by 
people, especially developers, in Nigeria, Africa and the world.*/
#include <LiquidCrystal.h>
void setup() {
  // put your setup code here, to run once:
  pinMode(charge_extension, INPUT);
  pinMode(my_fuse_controller, INPUT);
  lcd.begin(16,2);
}
void automatic_charge_controller() {
    //This function will control battery charging and would ensure battery is disconnected once full and automatically plugged back once cell energy depletes.
    int battery_level = analogRead(battery);

    while (battery == 1023) {
      digitalWrite(my_fuse_controller, LOW);
      }
    if (battery_level < 1023) {
      digitalWrite(my_fuse_controller, HIGH);
      }
    }
void automatic_load_control() {
  //This function would control the extension (or other output source of the power bank).
  /*The array declared immediately below houses the ouput ports (4) of the extension.
  Their values is initialized, by default, to LOW*/
  int List []= {int first_port = 0, int second_port = 0, int third_port = 0, int fourth_port = 0}; //These ports here defined are the output ports for the extension.
  double capacity = 0;
  for (int item = 0; item <3; item++) {
    capacity += analogRead(List[item]);
    }
  while (capacity > maximum_ouput) {
    int counter = 0;
    double voltage_value = analogRead(List[counter]);
    digitalWrite(List[counter], LOW);
    counter += 1;
    lcd.setCursor(0, 0);
    lcd.print("Load Disconnected");
    delay(1000);
    lcd.clear();
    capacity -= voltage_value;
    }
  if (capacity == maximum_ouput || capacity < maximum_output) {
    lcd.setCursor(0, 0);
    lcd.print("Load Balanced");
    delay(1000);
    lcd.clear();
    }
  }
void loop() {
  // put your main code here, to run repeatedly:
  

}
