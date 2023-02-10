#include "esp_wpa2.h"
#include "esp_wifi.h"
#include "esp_wpa2.h"
#include <WiFi.h>

const char* ssid = "ASUS_Mtre_2.4G";
const char* password = "2015@La_Soulayrie.";

void setup(){
    Serial.begin(115200);
    delay(1000);

    WiFi.mode(WIFI_STA); //Optional
    
    WiFi.begin(ssid, password);
    Serial.println("\nConnecting");

    while(WiFi.status() != WL_CONNECTED){
        Serial.print(".");
        delay(100);
    }

     Serial.println("[*] Network information for ");
        Serial.println(ssid);
        Serial.print("[+] Current MAC Address:  ");
    Serial.println(WiFi.macAddress());
    Serial.print("Local ESP32 IP: ");
    Serial.println(WiFi.localIP());
    

}

void loop() {
  // put your main code here, to run repeatedly:

}
