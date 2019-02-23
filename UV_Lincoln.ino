void setup() {
  // setting baudrate -- best not to change 
   Serial.begin(9600);
   

}

void loop() {
  //initializing variables 
  float reading;
  float sensor_voltage;
  int uv_index;
  
  reading = analogRead(A5); //reading analog values from pin *A5* 

  
  Serial.print("Reading: ");
  Serial.print(reading);
  Serial.print(" (mV) \n");
  //the code block above is just used to display the analog input values

//  sensor_voltage = reading/4095*5000; 
//  uv_index = calc_index(sensor_voltage);
//  Serial.print("UV Index: ");
//  Serial.print(uv_index);

/*The commented code block above is used to calculate and output the UV Index. May need to be better calibrated to your specific device */
  
  
  
  delay(300); //delaying the output by 300 ms. You can change this number if you like




}

//function below is just designed to calculate the UV Index

int calc_index(int input){
  
  if(input < 10){
    return 0;
    }
  else if (input < 50){
    return 1;
    }
  else if (input < 227){
    return 2;
    }
  else if (input < 408){
    return 3;
    }
  else if (input < 503){
    return 4;
    }

  else if (input < 606){
    return 5;
    }

  else if (input < 696){
    return 6;
    }
  else if (input < 795){
    return 7;
    }

  else if (input < 881){
    return 8;
    }

  else if (input < 976){
    return 9;
    }
    
  else if (input < 1079){
    return 10;
    }

  else if (input > 1170){
    return 11;
    }

  else {
    Serial.print("ERROR");
    
    }
}
