
#include <Wire.h>
#include <DHT.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Sensor configuration
#define DHT_PIN 15
#define DHT_TYPE DHT22

// OLED configuration
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_ADDRESS 0x3C

DHT dht(DHT_PIN, DHT_TYPE);

Adafruit_SSD1306 display(
  SCREEN_WIDTH,
  SCREEN_HEIGHT,
  &Wire,
  -1
);

void setup() {
  Serial.begin(115200);

  // Initialize DHT sensor
  dht.begin();

  // Initialize I2C
  Wire.begin(21, 22);

  // Initialize OLED
  if (!display.begin(
    SSD1306_SWITCHCAPVCC,
    OLED_ADDRESS
  )) {
    Serial.println("OLED initialization failed!");
    while (true);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(1);

  Serial.println("IoT Smart Sensor Node started!");
}

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Sensor reading error!");
    delay(2000);
    return;
  }

  // Display measurements
  display.clearDisplay();
  display.setCursor(0, 0);

  display.println("SMART SENSOR NODE");
  display.println("-----------------");

  display.print("Temperature: ");
  display.print(temperature);
  display.println(" C");

  display.print("Humidity: ");
  display.print(humidity);
  display.println(" %");

  display.display();

  // Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(2000);
}
