
typedef struct _DD {
        const int esp_chip_id;
        const String id;
} device_details ;

// current
const device_details devices[] = {
  // ---------------------- PROXIMITY --------------------------
  {0x0065B6C7, "001"},  // proximity TOF1 - VL53L1X - 4m
  {0x00AAA13E, "002"},  // proximity TOF1 - VL52L1X - 4m pololu
  {0x0065AFD6, "003"},  // proximity TOF0 - VL52L0X - 2m - jumps
  {0x0066455C, "004"},  // proximity TOF0 - VL52L0X - 2m
  {0x0066425C, "005"},  // gesture/proximity/colour - RGB 16bit raw values
  {0x0065C28B, "006"},  // proximity ultrasonic SRF01
  {0x0066465D, "007"},
  {0x00A97FCC, "008"},
  {0x0065EAC7, "009"},
  // ---------------------- OTHERS -----------------------------
  {0x00666608, "010"},  //
  {0x0066460B, "011"},  // Thermal camera
  {0x00A8F31B, "012"},  // RGB - light - TCS34725
  {0x00664624, "013"},  // Mic
  {0x006648F0, "014"},  // Humidity
  {0x00A91667, "015"},  // Humidity
  {0x0065AFF1, "016"},  // Light different then 012 [LIGHT - ISL29125] - ADC 16 bits - 65535
  {0x006648F3, "017"},
  {0x00664552, "018"},
  {0x006643D4, "019"},
  {0x00664871, "020"},
  {0x0022AD43, "021"},  // Mobile Gyro on battery (Wemos D1)
  {0x0042970A, "031"},  // temporary sand valve
  {0x00, "099"} // blank or dummy default if not defined above
};
