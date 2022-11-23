#define VISUINO_ESP32

#include <OpenWire.h>
#include <Mitov.h>
#include <Arduino.h>
#include <Mitov_ESP32.h>
#include <Mitov_ESP32_WiFi.h>
#include <WiFi.h>
#define protected public
#define private public
#include <WiFiClientSecure.h>
#undef private
#undef protected
#define private public
#ifdef SEEEDUINO_WIO_TERMINAL
#else
#endif
#undef private
#include <Mitov_Brightness_ESP32_ST77XX_Display.h>
#include <Mitov_Display_ST7789_135_240.h>
#include <Mitov_Graphics.h>
#include <Mitov_Graphics_Color.h>
#include <Fonts\Fixed\GraphicsFont5x7.h>
#include <SPI.h>
#include <Mitov_Arduino_SPI.h>
#include <Mitov_SPI1.h>
#include <Arduino_ESP32_SPI_Class.h>
#include <Mitov_HTTP_Client.h>
#include <Mitov_JSON.h>
#include <Mitov_Timing.h>
#include <Mitov_Converters.h>


// Shared Component Member Variables

namespace ComponentVariables
{
class
{
public:
  bool Value1 : 1;
  uint32_t Value2 : 2;
  bool Value3 : 1;
  bool Value4 : 1;
  bool Value5 : 1;
  uint32_t Value6 : 16;
  bool Value7 : 1;
  bool Value8 : 1;
  bool Value9 : 1;
  uint32_t Value10 : 2;
  uint32_t Value11 : 32;
  bool Value12 : 1;
  bool Value13 : 1;
  bool Value14 : 1;
  bool Value15 : 1;
  bool Value16 : 1;
  bool Value17 : 1;
  bool Value18 : 1;
  bool Value19 : 1;
  bool Value20 : 1;
  bool Value21 : 1;
  bool Value22 : 1;
  bool Value23 : 1;
  bool Value24 : 1;
  bool Value25 : 1;
  bool Value26 : 1;
  bool Value27 : 1;
  bool Value28 : 1;
  uint32_t Value29 : 11;
  bool Value30 : 1;
  bool Value31 : 1;
  bool Value32 : 1;

} BitFields;

class Variable1
{
public:
  inline static bool GetValue() { return BitFields.Value1; }
  inline static void SetValue( bool AValue ) { BitFields.Value1 = AValue; }

};

class Variable2
{
public:
  inline static uint32_t GetValue() { return BitFields.Value2; }
  inline static void SetValue( uint32_t AValue ) { BitFields.Value2 = AValue; }

};

class Variable3
{
public:
  inline static bool GetValue() { return BitFields.Value3; }
  inline static void SetValue( bool AValue ) { BitFields.Value3 = AValue; }

};

class Variable4
{
public:
  inline static bool GetValue() { return BitFields.Value4; }
  inline static void SetValue( bool AValue ) { BitFields.Value4 = AValue; }

};

class Variable5
{
public:
  inline static bool GetValue() { return BitFields.Value5; }
  inline static void SetValue( bool AValue ) { BitFields.Value5 = AValue; }

};

class Variable6
{
public:
  inline static uint32_t GetValue() { return BitFields.Value6; }
  inline static void SetValue( uint32_t AValue ) { BitFields.Value6 = AValue; }

};

class Variable7
{
public:
  inline static bool GetValue() { return BitFields.Value7; }
  inline static void SetValue( bool AValue ) { BitFields.Value7 = AValue; }

};

class Variable8
{
public:
  inline static bool GetValue() { return BitFields.Value8; }
  inline static void SetValue( bool AValue ) { BitFields.Value8 = AValue; }

};

class Variable9
{
public:
  inline static bool GetValue() { return BitFields.Value9; }
  inline static void SetValue( bool AValue ) { BitFields.Value9 = AValue; }

};

class Variable10
{
public:
  inline static uint32_t GetValue() { return BitFields.Value10; }
  inline static void SetValue( uint32_t AValue ) { BitFields.Value10 = AValue; }

};

class Variable11
{
public:
  inline static uint32_t GetValue() { return BitFields.Value11; }
  inline static void SetValue( uint32_t AValue ) { BitFields.Value11 = AValue; }

};

class Variable12
{
public:
  inline static bool GetValue() { return BitFields.Value12; }
  inline static void SetValue( bool AValue ) { BitFields.Value12 = AValue; }

};

class Variable13
{
public:
  inline static bool GetValue() { return BitFields.Value13; }
  inline static void SetValue( bool AValue ) { BitFields.Value13 = AValue; }

};

class Variable14
{
public:
  inline static bool GetValue() { return BitFields.Value14; }
  inline static void SetValue( bool AValue ) { BitFields.Value14 = AValue; }

};

class Variable15
{
public:
  inline static bool GetValue() { return BitFields.Value15; }
  inline static void SetValue( bool AValue ) { BitFields.Value15 = AValue; }

};

class Variable16
{
public:
  inline static bool GetValue() { return BitFields.Value16; }
  inline static void SetValue( bool AValue ) { BitFields.Value16 = AValue; }

};

class Variable17
{
public:
  inline static bool GetValue() { return BitFields.Value17; }
  inline static void SetValue( bool AValue ) { BitFields.Value17 = AValue; }

};

class Variable18
{
public:
  inline static bool GetValue() { return BitFields.Value18; }
  inline static void SetValue( bool AValue ) { BitFields.Value18 = AValue; }

};

class Variable19
{
public:
  inline static bool GetValue() { return BitFields.Value19; }
  inline static void SetValue( bool AValue ) { BitFields.Value19 = AValue; }

};

class Variable20
{
public:
  inline static bool GetValue() { return BitFields.Value20; }
  inline static void SetValue( bool AValue ) { BitFields.Value20 = AValue; }

};

class Variable21
{
public:
  inline static bool GetValue() { return BitFields.Value21; }
  inline static void SetValue( bool AValue ) { BitFields.Value21 = AValue; }

};

class Variable22
{
public:
  inline static bool GetValue() { return BitFields.Value22; }
  inline static void SetValue( bool AValue ) { BitFields.Value22 = AValue; }

};

class Variable23
{
public:
  inline static bool GetValue() { return BitFields.Value23; }
  inline static void SetValue( bool AValue ) { BitFields.Value23 = AValue; }

};

class Variable24
{
public:
  inline static bool GetValue() { return BitFields.Value24; }
  inline static void SetValue( bool AValue ) { BitFields.Value24 = AValue; }

};

class Variable25
{
public:
  inline static bool GetValue() { return BitFields.Value25; }
  inline static void SetValue( bool AValue ) { BitFields.Value25 = AValue; }

};

class Variable26
{
public:
  inline static bool GetValue() { return BitFields.Value26; }
  inline static void SetValue( bool AValue ) { BitFields.Value26 = AValue; }

};

class Variable27
{
public:
  inline static bool GetValue() { return BitFields.Value27; }
  inline static void SetValue( bool AValue ) { BitFields.Value27 = AValue; }

};

class Variable28
{
public:
  inline static bool GetValue() { return BitFields.Value28; }
  inline static void SetValue( bool AValue ) { BitFields.Value28 = AValue; }

};

class Variable29
{
public:
  inline static uint32_t GetValue() { return BitFields.Value29; }
  inline static void SetValue( uint32_t AValue ) { BitFields.Value29 = AValue; }

};

class Variable30
{
public:
  inline static bool GetValue() { return BitFields.Value30; }
  inline static void SetValue( bool AValue ) { BitFields.Value30 = AValue; }

};

class Variable31
{
public:
  inline static bool GetValue() { return BitFields.Value31; }
  inline static void SetValue( bool AValue ) { BitFields.Value31 = AValue; }

};

class Variable32
{
public:
  inline static bool GetValue() { return BitFields.Value32; }
  inline static void SetValue( bool AValue ) { BitFields.Value32 = AValue; }

};

} // ComponentVariables

// Arduino Constant Declarations

namespace VisuinoConstants
{
class FloatValue2
{
public:
    inline static constexpr float GetValue() { return 0.200000002980232; }
};

class FloatValue0
{
public:
    inline static constexpr float GetValue() { return 19.5; }
};

class FloatValue1
{
public:
    inline static constexpr float GetValue() { return 1; }
};

class TextValue14
{
public:
    inline static constexpr const char *GetValue() { return "percent_change_24"; }
};

class TextValue17
{
public:
    inline static constexpr const char *GetValue() { return "low"; }
};

class TextValue22
{
public:
    inline static constexpr const char *GetValue() { return "open_24"; }
};

class TextValue1
{
public:
    inline static constexpr const char *GetValue() { return "Marina.Thiago.2G"; }
};

class TextValue3
{
public:
    inline static constexpr const char *GetValue() { return "www.bitstamp.net"; }
};

class TextValue24
{
public:
    inline static constexpr const char *GetValue() { return "ask"; }
};

class TextValue12
{
public:
    inline static constexpr const char *GetValue() { return "close"; }
};

class TextValue18
{
public:
    inline static constexpr const char *GetValue() { return "bid"; }
};

class TextValue13
{
public:
    inline static constexpr const char *GetValue() { return "/api/v2/ticker/ethusd/"; }
};

class TextValue5
{
public:
    inline static constexpr const char *GetValue() { return "MIN.24H"; }
};

class TextValue7
{
public:
    inline static constexpr const char *GetValue() { return "% 24h"; }
};

class TextValue9
{
public:
    inline static constexpr const char *GetValue() { return "HTTP/1.1"; }
};

class TextValue16
{
public:
    inline static constexpr const char *GetValue() { return "volume"; }
};

class TextValue21
{
public:
    inline static constexpr const char *GetValue() { return "last"; }
};

class TextValue6
{
public:
    inline static constexpr const char *GetValue() { return "VALOR"; }
};

class TextValue10
{
public:
    inline static constexpr const char *GetValue() { return "text/html"; }
};

class TextValue0
{
public:
    inline static constexpr const char *GetValue() { return ""; }
};

class TextValue4
{
public:
    inline static constexpr const char *GetValue() { return "\011-----BEGIN CERTIFICATE-----\r\nMIIEtjCCA56gAwIBAgIQDHmpRLCMEZUgkmFf4msdgzANBgkqhkiG9w0BAQsFADBs\r\nMQswCQYDVQQGEwJVUzEVMBMGA1UEChMMRGlnaUNlcnQgSW5jMRkwFwYDVQQLExB3\r\nd3cuZGlnaWNlcnQuY29tMSswKQYDVQQDEyJEaWdpQ2VydCBIaWdoIEFzc3VyYW5j\r\nZSBFViBSb290IENBMB4XDTEzMTAyMjEyMDAwMFoXDTI4MTAyMjEyMDAwMFowdTEL\r\nMAkGA1UEBhMCVVMxFTATBgNVBAoTDERpZ2lDZXJ0IEluYzEZMBcGA1UECxMQd3d3\r\nLmRpZ2ljZXJ0LmNvbTE0MDIGA1UEAxMrRGlnaUNlcnQgU0hBMiBFeHRlbmRlZCBW\r\nYWxpZGF0aW9uIFNlcnZlciBDQTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoC\r\nggEBANdTpARR+JmmFkhLZyeqk0nQOe0MsLAAh/FnKIaFjI5j2ryxQDji0/XspQUY\r\nuD0+xZkXMuwYjPrxDKZkIYXLBxA0sFKIKx9om9KxjxKws9LniB8f7zh3VFNfgHk/\r\nLhqqqB5LKw2rt2O5Nbd9FLxZS99RStKh4gzikIKHaq7q12TWmFXo/a8aUGxUvBHy\r\n/Urynbt/DvTVvo4WiRJV2MBxNO723C3sxIclho3YIeSwTQyJ3DkmF93215SF2AQh\r\ncJ1vb/9cuhnhRctWVyh+HA1BV6q3uCe7seT6Ku8hI3UarS2bhjWMnHe1c63YlC3k\r\n8wyd7sFOYn4XwHGeLN7x+RAoGTMCAwEAAaOCAUkwggFFMBIGA1UdEwEB/wQIMAYB\r\nAf8CAQAwDgYDVR0PAQH/BAQDAgGGMB0GA1UdJQQWMBQGCCsGAQUFBwMBBggrBgEF\r\nBQcDAjA0BggrBgEFBQcBAQQoMCYwJAYIKwYBBQUHMAGGGGh0dHA6Ly9vY3NwLmRp\r\nZ2ljZXJ0LmNvbTBLBgNVHR8ERDBCMECgPqA8hjpodHRwOi8vY3JsNC5kaWdpY2Vy\r\ndC5jb20vRGlnaUNlcnRIaWdoQXNzdXJhbmNlRVZSb290Q0EuY3JsMD0GA1UdIAQ2\r\nMDQwMgYEVR0gADAqMCgGCCsGAQUFBwIBFhxodHRwczovL3d3dy5kaWdpY2VydC5j\r\nb20vQ1BTMB0GA1UdDgQWBBQ901Cl1qCt7vNKYApl0yHU+PjWDzAfBgNVHSMEGDAW\r\ngBSxPsNpA/i/RwHUmCYaCALvY2QrwzANBgkqhkiG9w0BAQsFAAOCAQEAnbbQkIbh\r\nhgLtxaDwNBx0wY12zIYKqPBKikLWP8ipTa18CK3mtlC4ohpNiAexKSHc59rGPCHg\r\n4xFJcKx6HQGkyhE6V6t9VypAdP3THYUYUN9XR3WhfVUgLkc3UHKMf4Ib0mKPLQNa\r\n2sPIoc4sUqIAY+tzunHISScjl2SFnjgOrWNoPLpSgVh5oywM395t6zHyuqB8bPEs\r\n1OG9d4Q3A84ytciagRpKkk47RpqF/oOi+Z6Mo8wNXrM9zwR4jxQUezKcxwCmXMS1\r\noVWNWlZopCJwqjyBcdmdqEU79OX2olHdx3ti6G8MdOu42vi/hw15UJGQmxg7kVkn\r\n8TUoE6smftX3eg==\r\n-----END CERTIFICATE-----"; }
};

class TextValue15
{
public:
    inline static constexpr const char *GetValue() { return "vwap"; }
};

class TextValue8
{
public:
    inline static constexpr const char *GetValue() { return "MAX.24H"; }
};

class TextValue2
{
public:
    inline static constexpr const char *GetValue() { return "20122020"; }
};

class TextValue19
{
public:
    inline static constexpr const char *GetValue() { return "high"; }
};

class TextValue11
{
public:
    inline static constexpr const char *GetValue() { return "no-cache"; }
};

class TextValue20
{
public:
    inline static constexpr const char *GetValue() { return "timestamp"; }
};

class TextValue23
{
public:
    inline static constexpr const char *GetValue() { return "open"; }
};

  constexpr PROGMEM const uint8_t ArrayValue0[] = { 255,0,0,5,0,0,0,0,32,0,16,164,0,41,138,0,58,47,0,66,211,0,75,54,0,68,61,0,28,159,0,36,127,0,76,61,0,75,22,0,66,178,0,50,14,0,33,72,0,8,131,0,0,0,100,0,0,0,0,0,0,25,39,0,66,144,0,36,127,0,28,159,4,36,127,1,28,159,4,36,127,0,28,159,0,44,61,0,58,145,0,16,197,96,0,0,0,0,65,0,50,13,0,52,28,2,36,127,13,28,159,0,36,127,0,36,127,0,28,159,0,44,61,0,41,170,0,0,0,91,0,0,0,0,32,0,50,13,0,36,127,0,44,95,0,36,127,19,28,159,0,36,127,0,44,95,0,52,28,0,41,137,89,0,0,0,25,6,0,44,61,0,44,95,0,36,127,23,28,159,0,36,127,0,44,95,0,59,119,0,16,164,85,0,0,0,0,0,0,58,13,0,36,127,0,36,127,27,28,159,0,36,127,0,28,159,0,41,138,83,0,0,0,8,98,0,43,251,0,36,127,15,28,159,0,44,95,0,36,127,12,28,159,0,36,127,0,36,127,0,66,144,0,0,32,80,0,0,0,8,98,0,52,28,0,36,127,15,28,159,0,44,95,0,157,126,0,100,94,0,36,127,13,28,159,0,36,127,0,51,185,0,0,33,78,0,0,0,8,98,0,44,62,0,36,127,15,28,159,0,52,62,0,132,189,0,247,223,0,165,158,0,44,95,14,28,159,0,36,127,0,36,94,0,0,32,76,0,0,0,8,98,0,52,28,0,36,127,15,28,159,0,36,127,0,44,95,0,214,255,0,255,223,0,198,127,0,124,157,0,44,95,14,28,159,0,36,127,0,74,243,0,0,0,74,0,0,0,0,0,0,59,119,0,44,95,16,28,159,0,68,30,0,149,94,0,255,255,0,247,191,0,198,127,0,182,30,0,44,127,0,36,127,14,28,159,0,44,95,0,66,111,74,0,0,0,66,77,0,44,95,16,28,159,0,44,95,0,68,94,0,239,127,0,255,255,0,247,159,0,198,95,0,198,159,0,149,62,0,52,94,15,28,159,0,52,94,0,41,169,13,0,0,0,82,170,5,214,154,0,82,170,0,132,48,0,214,154,2,0,0,0,148,178,0,189,247,0,214,154,0,173,117,0,82,170,1,0,0,0,214,154,0,132,48,1,0,0,0,82,170,0,214,154,0,165,20,0,0,0,5,214,154,0,0,0,0,132,48,2,214,154,0,206,89,0,165,20,0,82,170,16,0,0,0,33,38,0,44,95,0,36,127,16,28,159,0,67,254,0,190,62,1,255,255,0,247,159,0,198,95,0,198,127,0,190,95,0,100,94,0,44,95,14,28,159,0,36,127,0,36,127,0,8,130,12,0,0,0,66,8,1,165,20,0,214,154,0,239,93,1,165,20,0,66,8,0,165,20,0,255,255,1,0,0,0,189,247,0,247,190,0,165,20,0,115,174,0,206,89,0,247,190,0,82,170,0,0,0,0,255,255,0,165,20,0,0,0,0,82,170,0,247,190,0,214,154,0,41,69,0,0,0,0,255,255,0,189,247,3,165,20,0,0,0,0,165,20,0,255,255,1,99,44,0,148,178,0,222,251,0,247,190,0,41,69,14,0,0,0,0,33,0,59,251,0,36,127,16,28,159,0,52,62,0,132,221,0,255,255,1,255,255,0,247,159,0,198,95,0,198,127,0,198,159,0,165,190,0,44,95,0,36,127,14,28,159,0,44,95,0,74,243,15,0,0,0,165,20,0,214,154,2,0,0,0,165,20,0,255,255,0,0,0,0,82,170,0,255,255,0,99,44,2,0,0,0,189,247,0,132,48,0,0,0,0,255,255,0,165,20,0,132,48,0,247,190,0,189,247,2,0,0,0,255,255,0,99,44,4,0,0,0,165,20,0,255,255,2,0,0,0,99,44,0,255,255,0,99,44,14,0,0,0,58,45,0,52,94,16,28,159,0,36,127,0,44,95,0,223,31,2,255,255,0,247,159,0,198,95,1,198,127,0,198,159,0,132,222,0,52,94,15,28,159,0,52,94,0,33,71,14,0,0,0,165,20,0,214,154,2,0,0,0,165,20,0,255,255,0,0,0,0,148,178,0,247,190,6,0,0,0,255,255,0,222,251,0,255,255,0,222,251,3,0,0,0,255,255,0,222,251,2,214,154,0,173,117,0,0,0,0,165,20,0,255,255,2,165,20,0,239,93,0,222,251,14,0,0,0,8,65,0,44,94,0,36,127,16,28,159,0,68,30,0,165,190,3,255,255,0,247,159,0,198,95,1,198,127,0,198,127,0,190,62,0,52,127,0,36,127,14,28,159,0,36,127,0,75,119,0,0,0,13,0,0,0,165,20,0,214,154,2,0,0,0,165,20,0,255,255,0,0,0,0,148,178,0,255,255,6,0,0,0,255,255,0,247,190,0,165,20,0,255,255,0,173,117,2,0,0,0,255,255,0,189,247,2,165,20,0,132,48,0,0,0,0,165,20,0,255,255,0,165,20,0,189,247,0,255,255,0,214,154,15,0,0,0,58,45,0,52,94,16,28,159,0,44,95,0,100,94,0,247,191,3,255,255,0,247,159,0,198,95,2,198,127,0,206,159,0,149,94,0,52,62,15,28,159,0,44,95,0,33,71,13,0,0,0,165,20,0,214,154,2,0,0,0,165,20,0,255,255,0,0,0,0,99,44,0,255,255,0,82,170,2,0,0,0,214,154,0,189,247,0,0,0,0,255,255,0,165,20,0,0,0,0,148,178,0,255,255,0,132,48,1,0,0,0,255,255,0,99,44,4,0,0,0,165,20,0,255,255,1,0,0,0,115,174,0,255,255,0,165,20,13,0,0,0,0,0,0,59,252,0,36,127,16,28,159,0,52,62,0,206,159,4,255,255,0,247,159,0,198,95,2,198,127,0,198,127,0,198,127,0,116,125,0,44,95,14,28,159,0,44,95,0,74,210,13,0,0,0,165,20,0,214,154,2,0,0,0,165,20,0,255,255,1,0,0,0,189,247,0,247,190,0,148,178,0,115,174,0,206,89,0,255,255,0,82,170,0,0,0,0,255,255,0,165,20,1,0,0,0,189,247,0,247,190,0,82,170,0,0,0,0,255,255,0,148,178,3,99,44,0,41,69,0,165,20,0,255,255,2,0,0,0,165,20,0,255,255,0,99,44,12,0,0,0,25,6,0,36,127,16,28,159,0,60,62,0,141,30,5,255,255,0,247,159,0,198,95,0,198,127,2,198,127,0,198,159,0,173,222,0,44,95,0,36,127,13,28,159,0,36,127,0,28,159,0,8,131,12,0,0,0,132,48,0,173,117,2,0,0,0,132,48,0,214,154,2,0,0,0,148,178,0,206,89,0,214,154,0,173,117,0,99,44,1,0,0,0,214,154,0,132,48,1,0,0,0,41,69,1,206,89,0,0,0,5,214,154,0,82,170,0,132,48,0,214,154,3,0,0,1,206,89,12,0,0,0,66,177,0,44,95,15,28,159,0,36,127,0,36,127,0,231,95,5,255,255,0,247,159,0,198,95,4,198,127,0,198,159,0,140,254,0,52,94,14,28,159,0,44,95,0,58,44,64,0,0,0,0,32,0,52,61,0,36,127,15,28,159,0,60,30,0,181,254,6,255,255,0,247,159,0,198,95,1,198,127,0,198,127,1,198,127,0,198,127,0,190,94,0,68,94,0,36,127,13,28,159,0,36,127,0,75,20,64,0,0,0,16,164,16,28,159,0,44,95,0,116,157,0,255,223,6,255,255,0,247,191,0,198,127,5,198,127,0,198,159,0,157,126,0,44,95,13,28,159,0,36,127,0,52,61,0,0,32,63,0,0,0,41,170,0,44,95,14,28,159,0,36,127,0,52,62,0,206,191,6,255,255,0,255,255,0,214,255,0,181,254,0,198,127,0,198,127,3,198,127,0,198,127,0,198,127,0,124,157,0,44,95,13,28,159,0,36,127,0,24,229,63,0,0,0,66,112,0,36,127,14,28,159,0,68,30,0,149,62,5,255,255,0,247,223,0,223,63,0,206,159,0,173,254,0,124,189,0,141,30,0,173,222,0,198,127,0,198,127,0,198,127,1,198,127,0,198,127,0,181,254,0,36,127,0,36,127,12,28,159,0,36,127,0,41,138,63,0,0,0,74,211,0,36,127,13,28,159,0,36,127,0,60,95,0,239,127,3,255,255,0,247,159,0,214,255,0,198,127,0,190,95,0,198,127,0,181,254,0,124,189,0,124,189,0,124,189,0,141,30,0,165,190,0,190,95,0,198,159,0,198,127,0,198,127,0,206,159,0,149,62,0,52,62,12,28,159,0,36,127,0,49,237,23,0,0,3,99,44,0,82,170,1,0,0,0,99,44,0,66,8,3,0,0,0,99,44,0,66,8,24,0,0,0,83,54,0,36,127,13,28,159,0,67,254,0,190,62,1,255,255,0,255,255,0,239,127,0,214,223,0,198,95,0,190,95,0,198,95,0,198,127,0,198,127,0,181,254,0,124,189,1,132,189,0,124,189,0,124,189,0,132,253,0,165,158,0,190,62,0,198,127,0,198,127,0,190,95,0,92,94,0,36,127,11,28,159,0,36,127,0,51,54,23,0,0,0,255,255,0,222,251,1,214,154,0,255,255,0,132,48,0,0,0,0,189,247,0,247,190,0,66,8,1,0,0,0,173,117,0,247,190,0,82,170,24,0,0,0,68,61,0,36,127,12,28,159,0,52,62,0,132,189,0,255,255,0,255,223,0,239,127,0,206,191,1,190,95,0,198,95,2,198,127,0,198,127,0,181,254,0,124,189,3,132,189,0,124,189,0,124,157,0,132,221,0,157,94,0,182,30,0,206,159,0,173,222,0,44,95,12,28,159,0,51,185,23,0,0,0,255,255,0,99,44,1,0,0,0,173,117,0,222,251,0,0,0,0,41,69,1,222,251,0,0,0,0,115,174,0,255,255,0,115,174,25,0,0,13,28,159,0,36,127,0,36,127,0,214,255,0,231,95,0,198,159,0,190,95,0,190,95,0,198,95,4,198,127,0,198,127,0,181,254,0,124,189,5,132,189,0,132,189,0,124,189,0,124,189,0,149,62,0,181,254,0,132,221,0,44,95,12,28,159,23,0,0,0,255,255,0,148,178,0,99,44,0,132,48,0,222,251,0,173,117,1,0,0,0,82,170,0,247,190,0,173,117,0,247,190,0,165,20,26,0,0,0,36,127,12,28,159,0,36,127,0,44,127,0,173,222,0,198,127,0,198,127,0,198,95,0,198,127,4,198,127,0,198,95,0,198,127,0,181,254,0,124,189,8,132,189,0,132,189,0,124,189,0,116,125,0,28,159,11,28,159,0,36,94,23,0,0,0,255,255,0,222,251,1,214,154,0,255,255,0,173,117,2,0,0,0,132,48,0,255,255,0,214,154,27,0,0,0,76,61,0,36,127,14,28,159,0,44,159,0,182,30,0,198,159,0,198,127,3,198,127,0,198,95,0,198,127,0,198,127,0,181,254,0,124,189,6,132,189,0,132,221,0,132,221,0,116,125,0,92,29,12,28,159,0,36,127,0,51,120,23,0,0,0,255,255,0,99,44,1,0,0,0,99,44,0,255,255,0,82,170,2,0,0,0,255,255,0,99,44,27,0,0,0,83,54,0,36,127,11,28,159,0,36,127,0,36,127,0,28,159,0,28,159,0,44,127,0,124,254,0,190,95,0,198,159,0,198,127,3,198,127,0,198,127,0,181,254,0,124,189,4,132,189,0,132,221,0,132,221,0,124,157,0,52,127,0,36,127,0,36,127,0,36,127,12,28,159,0,36,61,23,0,0,0,255,255,0,99,44,1,0,0,0,165,20,0,255,255,0,82,170,2,0,0,0,255,255,0,99,44,27,0,0,0,74,210,0,36,127,11,28,159,0,36,127,0,28,159,0,173,254,0,133,62,0,44,95,0,28,159,0,36,159,0,149,94,0,198,127,0,198,159,2,198,127,0,198,127,0,181,254,0,124,189,3,132,189,0,132,221,0,124,189,0,68,126,0,36,127,0,36,127,0,44,127,0,149,94,0,124,157,0,36,127,10,28,159,0,36,127,0,49,204,23,0,0,3,255,255,0,247,190,0,173,117,3,0,0,0,255,255,0,99,44,27,0,0,0,58,47,0,36,127,12,28,159,0,44,95,0,116,125,0,247,159,0,198,159,0,52,159,0,28,159,0,44,127,0,84,158,0,157,190,0,198,159,0,198,127,0,198,127,0,198,127,0,181,254,0,124,189,1,132,189,0,132,221,0,132,189,0,116,93,0,44,127,1,28,159,0,100,190,0,190,62,0,149,126,0,44,95,11,28,159,0,36,127,0,41,137,63,0,0,0,33,72,0,36,127,13,28,159,0,68,30,0,149,62,0,255,255,0,255,223,0,173,222,0,44,127,1,28,159,0,92,222,0,182,62,0,206,159,0,198,127,0,181,254,0,124,189,0,132,221,0,132,221,0,124,157,0,52,127,0,44,95,0,28,159,0,68,126,0,173,190,0,206,191,0,173,254,1,36,127,11,28,159,0,36,127,0,24,229,63,0,0,0,16,131,0,36,127,14,28,159,0,67,254,0,181,254,1,255,255,0,239,127,0,101,31,0,28,159,0,36,95,0,36,127,0,108,254,0,198,127,0,182,62,0,132,189,0,124,157,0,28,159,0,36,127,0,28,159,0,52,127,0,157,126,0,198,127,0,206,159,0,190,95,0,92,94,0,44,95,11,28,159,0,36,127,0,52,28,0,0,0,63,0,0,0,0,0,0,52,29,0,36,127,13,28,159,1,36,127,0,214,255,2,255,255,0,214,255,0,52,159,1,28,159,0,44,159,0,141,62,0,68,126,0,44,127,0,36,127,0,28,159,0,116,254,0,190,94,0,198,159,0,198,127,0,198,159,0,132,221,0,52,94,12,28,159,0,44,95,0,74,210,65,0,0,0,66,111,0,44,95,14,28,159,0,52,94,0,116,125,0,247,191,3,255,255,0,190,94,0,36,159,1,28,159,0,28,159,0,28,159,0,52,159,0,181,254,0,198,159,0,198,127,0,198,127,0,198,159,0,157,126,0,44,95,13,28,159,0,36,127,0,41,138,65,0,0,0,24,229,0,36,127,15,28,159,0,68,30,0,157,126,4,255,255,0,247,191,0,173,222,0,28,159,0,44,127,0,165,190,0,198,127,0,198,127,1,198,127,0,198,159,0,182,30,0,36,127,0,36,127,12,28,159,0,36,127,0,36,127,0,8,65,2,0,0,6,9,204,0,0,165,0,9,40,0,9,204,3,0,0,1,9,138,1,0,0,0,9,204,0,0,165,2,0,0,0,0,165,0,9,204,0,9,40,3,0,0,0,9,204,0,9,40,2,0,0,0,0,165,0,9,204,3,0,0,0,9,138,1,9,204,0,0,165,6,0,0,1,9,204,0,9,138,8,0,0,0,59,251,0,36,127,14,28,159,0,36,127,0,52,62,0,198,126,5,255,255,0,223,31,0,190,62,0,198,159,2,198,127,0,198,127,0,198,127,0,116,125,0,44,95,13,28,159,0,44,95,0,74,177,3,0,0,6,28,159,0,9,204,0,18,212,0,28,159,3,0,0,1,27,186,1,0,0,0,28,159,0,9,204,2,0,0,0,18,212,0,28,159,0,19,87,3,0,0,0,28,159,0,27,251,0,0,165,1,0,0,0,9,204,0,28,159,1,0,0,0,0,165,0,27,186,1,28,159,0,28,94,0,28,159,0,27,186,0,0,165,2,0,0,0,19,87,0,28,159,0,28,94,0,27,251,0,28,159,0,27,251,0,9,138,6,0,0,0,49,202,0,44,95,15,28,159,0,44,95,0,60,94,0,239,127,4,255,255,0,247,191,0,198,127,3,198,127,0,198,159,0,141,30,0,52,94,14,28,159,0,36,127,0,25,5,6,0,0,0,28,159,0,18,212,2,0,0,0,18,212,0,28,159,3,0,0,1,27,186,1,0,0,0,28,159,0,9,204,2,0,0,0,28,61,0,27,186,0,28,159,0,9,40,2,0,0,1,28,159,0,19,87,1,0,0,0,9,204,0,28,159,1,0,0,0,27,186,0,28,94,0,18,112,0,0,165,0,0,0,0,9,204,0,28,94,0,27,251,1,0,0,0,19,21,0,28,94,0,9,204,1,0,0,0,9,40,0,28,61,0,27,186,6,0,0,0,0,32,0,67,219,0,36,127,15,28,159,0,60,62,0,132,221,0,255,255,3,255,255,0,247,159,0,198,95,2,198,127,0,198,159,0,165,190,0,44,95,14,28,159,0,44,95,0,74,211,7,0,0,0,28,159,0,18,212,2,0,0,0,18,212,0,28,159,3,0,0,1,27,186,1,0,0,0,28,159,0,9,204,1,0,0,0,18,112,0,28,159,0,9,40,0,28,94,0,19,87,2,0,0,0,28,159,0,19,87,0,28,159,0,18,112,0,0,0,0,9,204,0,28,159,0,0,0,0,9,40,0,28,159,0,18,178,3,0,0,0,10,14,0,28,159,0,9,40,0,0,165,0,28,159,0,18,178,3,0,0,0,9,204,0,10,14,7,0,0,0,41,137,0,52,94,16,28,159,0,68,30,0,173,222,3,255,255,0,247,159,1,198,95,0,198,127,0,198,127,0,190,62,0,68,94,0,36,127,13,28,159,0,36,127,0,36,127,0,24,228,7,0,0,0,28,159,0,18,212,2,0,0,0,18,212,5,28,159,0,27,186,1,0,0,0,28,159,0,9,204,1,0,0,0,27,251,0,19,153,0,0,0,0,18,212,0,28,159,0,0,165,1,0,0,0,28,159,0,9,204,0,19,87,0,28,94,0,9,138,0,9,204,0,28,159,0,0,0,0,9,204,0,28,159,0,9,204,3,0,0,0,9,40,0,28,159,0,18,112,0,9,204,0,28,159,0,9,204,1,0,0,3,9,204,8,0,0,0,83,20,0,44,95,15,28,159,0,36,127,0,52,94,0,214,223,2,255,255,0,247,159,0,198,95,0,198,127,0,198,127,0,198,127,0,132,189,0,52,94,14,28,159,0,44,95,0,66,110,8,0,0,0,28,159,0,18,212,2,0,0,0,18,212,0,28,159,3,9,204,0,27,251,0,27,186,1,0,0,0,28,159,0,9,204,0,0,0,0,9,204,0,28,159,0,19,153,0,18,212,0,19,87,0,28,159,0,18,212,1,0,0,0,28,159,0,9,204,0,0,165,1,27,251,0,10,14,0,28,159,0,0,0,0,9,138,0,28,159,0,18,178,3,0,0,0,0,165,0,28,159,0,10,14,0,9,138,0,28,159,0,10,14,1,0,0,1,27,186,0,27,251,0,28,159,8,0,0,0,16,196,0,28,159,0,36,127,15,28,159,0,44,95,0,100,126,0,247,159,1,255,255,0,247,159,0,198,95,0,198,127,0,206,159,0,157,94,0,52,62,14,28,159,0,44,95,0,60,28,0,0,32,8,0,0,0,28,159,0,18,212,2,0,0,0,18,212,0,28,159,3,0,0,1,27,186,1,0,0,0,28,159,0,9,204,0,0,0,0,19,87,0,28,61,2,18,212,0,27,186,0,28,94,0,0,165,0,0,0,0,28,159,0,9,204,0,0,0,0,9,138,0,28,94,0,27,251,0,28,159,1,0,0,0,28,94,0,27,251,3,0,0,0,18,178,0,28,159,0,0,165,0,0,0,0,28,94,0,19,153,3,0,0,0,9,204,0,28,159,9,0,0,0,49,202,0,52,94,16,28,159,0,68,30,0,149,62,1,255,255,0,247,159,0,198,95,0,198,159,0,173,254,0,28,159,0,36,127,13,28,159,0,36,127,0,36,127,0,25,5,9,0,0,0,28,159,0,18,212,2,0,0,0,18,212,0,28,159,3,0,0,1,27,186,1,0,0,0,28,159,0,9,204,0,9,40,0,28,159,0,18,212,2,0,0,0,9,204,0,28,159,0,18,112,0,0,0,0,28,159,0,9,204,1,0,0,0,18,112,1,28,159,1,0,0,0,18,112,0,28,159,0,27,186,0,18,112,0,10,14,0,19,153,0,28,159,0,18,178,1,0,0,0,18,112,0,28,159,0,19,153,0,10,14,0,9,204,0,18,178,0,28,61,0,28,159,10,0,0,0,66,144,0,44,95,16,28,159,0,60,62,0,190,62,0,255,255,0,247,159,0,198,127,0,198,95,0,108,93,0,44,95,14,28,159,0,44,95,0,49,235,10,0,0,0,28,159,0,18,212,2,0,0,0,18,212,0,28,159,3,0,0,1,27,186,1,0,0,0,28,159,0,9,204,0,18,178,0,28,159,0,9,40,3,0,0,0,27,251,0,28,61,0,0,0,0,28,159,0,9,204,2,0,0,0,19,87,0,28,159,2,0,0,0,10,14,0,19,153,0,28,94,0,28,159,0,27,186,0,10,14,3,0,0,0,9,204,0,19,153,0,28,61,0,28,159,0,28,61,0,19,87,0,9,40,10,0,0,0,0,32,0,59,87,0,36,127,15,28,159,0,36,127,0,28,159,0,231,95,0,255,223,0,198,127,0,132,254,0,52,94,14,28,159,0,36,127,0,58,78,77,0,0,0,0,32,0,36,94,0,36,127,15,28,159,0,60,62,0,132,221,0,247,191,0,165,190,0,44,95,0,36,127,13,28,159,0,36,127,0,36,94,79,0,0,0,0,0,0,66,244,0,36,127,15,28,159,0,52,94,0,140,253,0,76,94,0,36,127,12,28,159,1,36,127,0,50,112,81,0,0,0,0,0,0,58,112,0,36,127,0,36,127,14,28,159,0,52,94,0,36,127,12,28,159,0,36,127,0,28,159,0,41,171,84,0,0,0,41,137,0,36,127,0,44,95,26,28,159,1,36,127,0,44,61,0,24,230,86,0,0,0,8,98,0,66,243,0,44,95,0,36,127,23,28,159,0,36,127,0,28,159,0,58,46,0,0,33,89,0,0,0,25,7,0,59,185,0,44,95,0,36,127,18,28,159,1,36,127,0,36,127,0,51,153,0,24,229,93,0,0,0,33,72,0,51,120,0,36,127,0,36,127,1,36,127,11,28,159,2,36,127,0,36,127,0,58,112,0,25,6,97,0,0,0,8,131,0,49,236,0,66,211,0,36,127,4,36,127,1,28,159,0,36,127,0,28,159,2,36,127,0,44,62,0,66,178,0,33,106,0,8,66,102,0,0,0,0,32,0,16,197,0,33,105,0,49,237,0,58,80,0,51,185,0,36,94,0,28,159,0,51,185,0,36,62,0,35,152,0,33,105,0,16,197,0,0,0,255,0,0,66,0,0 };
} // VisuinoConstants

// Pin Call Declarations

namespace PinCalls
{
class PinCallerReceive0
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive1
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive2
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive3
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive4
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive5
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive6
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive7
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive8
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive9
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive10
{
public:
  void Notify( void *_Data );

};
} // PinCalls

// Call Chains

namespace CallChains
{
class IsEnabled1
{
public:
  inline static constexpr uint32_t Count() { return 1; }
  static void Call( int32_t AIndex, bool & AValue );

};
class TryConnect1
{
public:
  inline static constexpr uint32_t Count() { return 1; }
  static void Call( int32_t AIndex, bool & AValue );

};
class AssignDNS1
{
public:
  inline static constexpr uint32_t Count() { return 1; }
  static void Call( int32_t AIndex );

};
class StopSocket1
{
public:
  inline static constexpr uint32_t Count() { return 1; }
  static void Call();

};
class Render1
{
public:
  inline static constexpr uint32_t Count() { return 0; }
  static void Call();

};
class ProcessData1
{
public:
  inline static constexpr uint32_t Count() { return 1; }
  static void Call( int32_t AIndex, void * AData );

};
class AddFields1
{
public:
  inline static constexpr uint32_t Count() { return 0; }
  static void Call( String & AText );

};
class StartSplit1
{
public:
  inline static constexpr uint32_t Count() { return 11; }
  static void Call();

};
class SendValue1
{
public:
  inline static constexpr uint32_t Count() { return 11; }
  static void Call();

};
class ExtractElement1
{
public:
  inline static constexpr uint32_t Count() { return 11; }
  static void Call( const char * AName, Mitov::String & AText, bool & AResult );

};
class IsEnding1
{
public:
  inline static constexpr uint32_t Count() { return 0; }
  static void Call( bool & AResult );

};
} // CallChains

// Arduino Board Declarations

namespace BoardDeclarations
{
namespace Types
{
typedef Mitov::Arduino_ESP32_SPI<
  SPI1, // 0_SPI
  Mitov::ConstantProperty<23, uint32_t, 23 >, // MISO
  Mitov::ConstantProperty<22, uint32_t, 19 >, // MOSI
  Mitov::ConstantProperty<24, uint32_t, 18 > // SCK
   > BoardSPI1;
} // namespace Types

namespace Instances
{
BoardDeclarations::Types::BoardSPI1 BoardSPI1;
} // namespace Instances

} // BoardDeclarations

// Declarations

namespace Declarations
{
namespace Types
{
typedef Mitov::ESP32WiFiModule<
  Mitov::NestedProperty<35, Mitov::ESP32WiFiModuleAccessPoint<
    Mitov::ConstantProperty<12, uint32_t, 1 >, // Channel
    Mitov::NestedProperty<34, Mitov::ESPWiFiModuleAccessPointConfig<
      Mitov::ConstantProperty<15, bool, false >, // Enabled
      Mitov::NestedProperty<27, Mitov::TIPAddress<
        Mitov::ConstantProperty<23, uint8_t, 0 >, // Octet1
        Mitov::ConstantProperty<24, uint8_t, 0 >, // Octet2
        Mitov::ConstantProperty<25, uint8_t, 0 >, // Octet3
        Mitov::ConstantProperty<26, uint8_t, 0 > // Octet4
         > >, // Gateway
      Mitov::NestedProperty<21, Mitov::TIPAddress<
        Mitov::ConstantProperty<17, uint8_t, 0 >, // Octet1
        Mitov::ConstantProperty<18, uint8_t, 0 >, // Octet2
        Mitov::ConstantProperty<19, uint8_t, 0 >, // Octet3
        Mitov::ConstantProperty<20, uint8_t, 0 > // Octet4
         > >, // IP
      Mitov::NestedProperty<33, Mitov::TIPAddress<
        Mitov::ConstantProperty<29, uint8_t, 255 >, // Octet1
        Mitov::ConstantProperty<30, uint8_t, 255 >, // Octet2
        Mitov::ConstantProperty<31, uint8_t, 255 >, // Octet3
        Mitov::ConstantProperty<32, uint8_t, 0 > // Octet4
         > > // Subnet
       > >, // Config
    Mitov::ConstantProperty<9, bool, true >, // Enabled
    Mitov::ConstantProperty<13, bool, false >, // IsHidden
    Mitov::ConstantPropertyString<11, ::VisuinoConstants::TextValue0 >, // Password
    Mitov::ConstantPropertyString<10, ::VisuinoConstants::TextValue0 > // SSID
     > >, // AccessPoint
  Mitov::EmbeddedCallChain<CallChains::AssignDNS1 >, // AccessPoints_AssignDNS
  Mitov::EmbeddedCallChain<CallChains::IsEnabled1 >, // AccessPoints_IsEnabled
  Mitov::EmbeddedCallChain<CallChains::TryConnect1 >, // AccessPoints_TryConnect
  Mitov::TextPin_NoImplementation<2 >, // AddressOutputPin
  Mitov::ConstantProperty<40, bool, true >, // AutoReconnect
  Mitov::TextPin_NoImplementation<4 >, // BSSIDOutputPin
  1, // COUNT_AccessPoints
  0, // COUNT_Scan_Elements
  1, // COUNT_Sockets
  false, // ESPNow
  Mitov::ConstantProperty<1, bool, true >, // Enabled
  Mitov::TypedVariable<36, uint32_t, ::ComponentVariables::Variable2 >, // FAccessPointIndex
  Mitov::TypedVariable<52, bool, ::ComponentVariables::Variable5 >, // FDNSUpdated
  Mitov::TypedVariable<48, bool, ::ComponentVariables::Variable3 >, // FIsStarted
  Mitov::TypedVariable<50, bool, ::ComponentVariables::Variable4 >, // FRemoteStarted
  Mitov::TextPin_NoImplementation<5 >, // GatewayIPOutputPin
  Mitov::ConstantPropertyString<41, ::VisuinoConstants::TextValue0 >, // HostName
  Mitov::NestedProperty<47, Mitov::TArduinoESP32WiFiLowPower<
    Mitov::ConstantProperty<45, bool, false >, // Enabled
    Mitov::ConstantProperty<46, bool, false > // MaxSaving
     > >, // LowPower
  Mitov::TextPin_NoImplementation<3 >, // MACOutputPin
  Mitov::DigitalPin_EmbeddedPinImplementation_ChangeOnly<7, ::PinCalls::PinCallerReceive0, Mitov::TypedVariable<0, bool, ::ComponentVariables::Variable1 > >, // RemoteConnectedOutputPin
  Mitov::EmbeddedCallChain<CallChains::StopSocket1 >, // Sockets_StopSocket
  Mitov::TextPin_NoImplementation<6 >, // SubnetMaskIPOutputPin
  Mitov::ConstantPropertyFloat<42, float, ::VisuinoConstants::FloatValue0 > // TransmitPower
   > TArduinoESP32WiFiModule1;
} // Types

namespace Instances
{
Types::TArduinoESP32WiFiModule1 TArduinoESP32WiFiModule1;
} // Instances

namespace Types
{
typedef Mitov::ESP32ModuleRemoteAccessPoint<
  Declarations::Types::TArduinoESP32WiFiModule1, // 0_TYPE_OWNER
  Declarations::Instances::TArduinoESP32WiFiModule1, // 1_NAME_OWNER
  Mitov::NestedProperty<7, Mitov::ESPWiFiModuleOptionalChannel<
    Mitov::ConstantProperty<6, uint32_t, 1 >, // Channel
    Mitov::ConstantProperty<5, bool, false > // Enabled
     > >, // Channel
  Mitov::NestedProperty<51, Mitov::ESPWiFiModuleRemoteConfig<
    Mitov::NestedProperty<44, Mitov::TIPAddress<
      Mitov::ConstantProperty<40, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<41, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<42, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<43, uint8_t, 0 > // Octet4
       > >, // DNS1
    Mitov::NestedProperty<50, Mitov::TIPAddress<
      Mitov::ConstantProperty<46, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<47, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<48, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<49, uint8_t, 0 > // Octet4
       > >, // DNS2
    Mitov::ConstantProperty<20, bool, false >, // Enabled
    Mitov::NestedProperty<32, Mitov::TIPAddress<
      Mitov::ConstantProperty<28, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<29, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<30, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<31, uint8_t, 0 > // Octet4
       > >, // Gateway
    Mitov::NestedProperty<26, Mitov::TIPAddress<
      Mitov::ConstantProperty<22, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<23, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<24, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<25, uint8_t, 0 > // Octet4
       > >, // IP
    Mitov::NestedProperty<38, Mitov::TIPAddress<
      Mitov::ConstantProperty<34, uint8_t, 255 >, // Octet1
      Mitov::ConstantProperty<35, uint8_t, 255 >, // Octet2
      Mitov::ConstantProperty<36, uint8_t, 255 >, // Octet3
      Mitov::ConstantProperty<37, uint8_t, 0 > // Octet4
       > > // Subnet
     > >, // Config
  Mitov::ConstantProperty<1, bool, true >, // Enabled
  Mitov::NestedProperty<18, Mitov::ESPWiFiModuleOptionalMacAddress<
    Mitov::ConstantProperty<9, bool, false >, // Enabled
    Mitov::NestedProperty<17, Mitov::TMACAddress<
      Mitov::ConstantProperty<11, uint8_t, 0 >, // Octet1
      Mitov::ConstantProperty<12, uint8_t, 0 >, // Octet2
      Mitov::ConstantProperty<13, uint8_t, 0 >, // Octet3
      Mitov::ConstantProperty<14, uint8_t, 0 >, // Octet4
      Mitov::ConstantProperty<15, uint8_t, 0 >, // Octet5
      Mitov::ConstantProperty<16, uint8_t, 0 > // Octet6
       > > // MacAddress
     > >, // MacAddress
  Mitov::ConstantPropertyString<3, ::VisuinoConstants::TextValue2 >, // Password
  Mitov::ConstantPropertyString<2, ::VisuinoConstants::TextValue1 > // SSID
   > TArduinoESP32WiFiModuleRemoteAccessPoint1;
} // Types

namespace Instances
{
Types::TArduinoESP32WiFiModuleRemoteAccessPoint1 TArduinoESP32WiFiModuleRemoteAccessPoint1;
} // Instances

namespace Types
{
typedef Mitov::TCPCACertSecureClientSocket<
  Declarations::Types::TArduinoESP32WiFiModule1, // 0_TYPE_OWNER
  Declarations::Instances::TArduinoESP32WiFiModule1, // 1_NAME_OWNER
  Mitov::ConstantPropertyString<19, ::VisuinoConstants::TextValue4 >, // CACert
  WiFiClientSecure, // CLIENT
  Mitov::ConstantPropertyString<17, ::VisuinoConstants::TextValue0 >, // Certificate
  Mitov::DigitalPin_EmbeddedPinImplementation_ChangeOnly<5, ::PinCalls::PinCallerReceive2, Mitov::TypedVariable<0, bool, ::ComponentVariables::Variable7 > >, // ConnectedOutputPin
  Mitov::TypedVariableValue<23, bool, ::ComponentVariables::Variable9, true >, // Enabled
  Mitov::TypedVariable<21, bool, ::ComponentVariables::Variable8 >, // FIsConnected
  Mitov::VariablePropertyString<9, ::VisuinoConstants::TextValue3 >, // Host
  Mitov::NestedProperty<15, Mitov::TIPAddress<
    Mitov::ConstantProperty<11, uint8_t, 0 >, // Octet1
    Mitov::ConstantProperty<12, uint8_t, 0 >, // Octet2
    Mitov::ConstantProperty<13, uint8_t, 0 >, // Octet3
    Mitov::ConstantProperty<14, uint8_t, 0 > // Octet4
     > >, // IPAddress
  Mitov::ConstantProperty<20, bool, false >, // Insecure
  Mitov::GenericPin_EmbeddedPinImplementation<4, ::PinCalls::PinCallerReceive1 >, // OutputPin
  Mitov::VariableMaxPropertySharedBits<3, uint32_t, 443, ::ComponentVariables::Variable6, 65535 >, // Port
  Mitov::ConstantPropertyString<18, ::VisuinoConstants::TextValue0 >, // PrivateKey
  Mitov::ConstantProperty<16, uint32_t, 60000 > // ReconnectDelay
   > TArduinoESP32WiFiTCPSecureClientSocket1;
} // Types

namespace Instances
{
Types::TArduinoESP32WiFiTCPSecureClientSocket1 TArduinoESP32WiFiTCPSecureClientSocket1;
} // Instances

namespace Types
{
typedef Mitov::DisplayST77XXBrightness<
  Mitov::BasicSPI_ST7735<
      BoardDeclarations::Types::BoardSPI1, // 0_SPI_TYPE_PIN
      BoardDeclarations::Instances::BoardSPI1, // 1_SPI_NAME_PIN
      Mitov::DigitalPin_DirectBoardPinImplementation<5>, // ChipSelectOutputPin
      Mitov::DigitalPin_DirectBoardPinImplementation<16>, // RegisterSelectOutputPin
      Mitov::ConstantProperty<20, uint32_t, 8000000 > // SPISpeed
       >, // 0_IMPLEMENTATION
  Mitov::DisplayOrientationDown, // 0_IMPLEMENTATION_ORIENTATION
  Mitov::Display_ST7789_135_240, // 0_IMPLEMENTATION_TYPE
  4, // 2_BRIGHTNESS_PIN
  Mitov::ConstantPropertyColor<3, Mitov::TColor, uint32_t, 0x000000 >, // BackgroundColor
  Mitov::ConstantPropertyFloat<14, float, ::VisuinoConstants::FloatValue1 >, // Brightness
  Mitov::EmbeddedCallChain<CallChains::Render1 >, // Elements_Render
  Mitov::ConstantProperty<15, uint32_t, 0 >, // FCursorX
  Mitov::ConstantProperty<17, uint32_t, 0 >, // FCursorY
  Mitov::ConstantProperty<13, bool, false >, // Inverted
  Mitov::ConstantProperty<12, Mitov::TArduinoGraphicsOrientation, Mitov::goRight >, // Orientation
  Mitov::NestedProperty<325, Mitov::TArduinoDisplayST7735PixelOffset< Mitov::ConstantProperty<322, bool, false >, Mitov::ConstantProperty<323, uint8_t, 0 >, Mitov::ConstantProperty<324, uint8_t, 0> > >, // OverridePixelOffset
  Mitov::DigitalPin_DirectBoardPinImplementation<23>, // ResetOutputPin
  Mitov::NestedProperty<11, Mitov::TGraphicsTextSettings<
    Mitov::ConstantPropertyColor<10, Mitov::TAlphaColor, uint32_t, 0xFF000000 >, // BackgroundColor
    Mitov::ConstantPropertyColor<9, Mitov::TAlphaColor, uint32_t, 0xFFFFFFFF >, // Color
    Mitov::FixedSizeFont<GraphicsFont5x7, 6, 8>, // Font
    Mitov::ConstantProperty<6, uint32_t, 1 >, // Size
    Mitov::ConstantProperty<8, bool, false >, // UseCodePage437Symbols
    Mitov::ConstantProperty<7, bool, true > // Wrap
     > > // Text
   > TTTGOTDisplayESP32DisplayModule1;
} // Types

namespace Instances
{
Types::TTTGOTDisplayESP32DisplayModule1 TTTGOTDisplayESP32DisplayModule1;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementDrawText<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFFFFFFFF >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<5, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<8, uint32_t, 2 >, // Size
  Mitov::ConstantPropertyString<10, ::VisuinoConstants::TextValue5 >, // Text
  Mitov::ConstantProperty<12, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<11, bool, true >, // Wrap
  Mitov::ConstantProperty<6, int32_t, 0 >, // X
  Mitov::ConstantProperty<7, int32_t, 0 > // Y
   > TArduinoColorGraphicsElementDrawText1;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementDrawText1 TArduinoColorGraphicsElementDrawText1;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementTextField<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantProperty<7, bool, true >, // AutoSize
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFF1E90FF >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<12, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::ConstantProperty<11, Mitov::TArduinoTextHorizontalAlign, Mitov::thaLeft >, // HorizontalAlign
  Mitov::VariablePropertyString<16, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<13, uint32_t, 3 >, // Size
  Mitov::ConstantProperty<9, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<10, uint32_t, 6 >, // Width
  Mitov::ConstantProperty<8, bool, true >, // Wrap
  Mitov::ConstantProperty<5, int32_t, 0 >, // X
  Mitov::ConstantProperty<6, int32_t, 20 > // Y
   > TArduinoColorGraphicsElementTextFeld1;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementTextFeld1 TArduinoColorGraphicsElementTextFeld1;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementDrawText<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFFFFFFFF >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<5, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<8, uint32_t, 2 >, // Size
  Mitov::ConstantPropertyString<10, ::VisuinoConstants::TextValue6 >, // Text
  Mitov::ConstantProperty<12, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<11, bool, true >, // Wrap
  Mitov::ConstantProperty<6, int32_t, 0 >, // X
  Mitov::ConstantProperty<7, int32_t, 48 > // Y
   > TArduinoColorGraphicsElementDrawText2;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementDrawText2 TArduinoColorGraphicsElementDrawText2;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementTextField<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantProperty<7, bool, true >, // AutoSize
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFF1E90FF >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<12, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::ConstantProperty<11, Mitov::TArduinoTextHorizontalAlign, Mitov::thaLeft >, // HorizontalAlign
  Mitov::VariablePropertyString<16, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<13, uint32_t, 3 >, // Size
  Mitov::ConstantProperty<9, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<10, uint32_t, 6 >, // Width
  Mitov::ConstantProperty<8, bool, true >, // Wrap
  Mitov::ConstantProperty<5, int32_t, 0 >, // X
  Mitov::ConstantProperty<6, int32_t, 66 > // Y
   > TArduinoColorGraphicsElementTextFeld2;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementTextFeld2 TArduinoColorGraphicsElementTextFeld2;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementDrawText<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFFFFFFFF >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<5, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<8, uint32_t, 2 >, // Size
  Mitov::ConstantPropertyString<10, ::VisuinoConstants::TextValue7 >, // Text
  Mitov::ConstantProperty<12, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<11, bool, true >, // Wrap
  Mitov::ConstantProperty<6, int32_t, 0 >, // X
  Mitov::ConstantProperty<7, int32_t, 92 > // Y
   > TArduinoColorGraphicsElementDrawText3;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementDrawText3 TArduinoColorGraphicsElementDrawText3;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementTextField<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantProperty<7, bool, true >, // AutoSize
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFF1E90FF >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<12, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::ConstantProperty<11, Mitov::TArduinoTextHorizontalAlign, Mitov::thaLeft >, // HorizontalAlign
  Mitov::VariablePropertyString<16, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<13, uint32_t, 3 >, // Size
  Mitov::ConstantProperty<9, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<10, uint32_t, 6 >, // Width
  Mitov::ConstantProperty<8, bool, true >, // Wrap
  Mitov::ConstantProperty<5, int32_t, 0 >, // X
  Mitov::ConstantProperty<6, int32_t, 110 > // Y
   > TArduinoColorGraphicsElementTextFeld3;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementTextFeld3 TArduinoColorGraphicsElementTextFeld3;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementDrawText<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFFFFFFFF >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<5, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<8, uint32_t, 2 >, // Size
  Mitov::ConstantPropertyString<10, ::VisuinoConstants::TextValue8 >, // Text
  Mitov::ConstantProperty<12, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<11, bool, true >, // Wrap
  Mitov::ConstantProperty<6, int32_t, 120 >, // X
  Mitov::ConstantProperty<7, int32_t, 0 > // Y
   > TArduinoColorGraphicsElementDrawText4;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementDrawText4 TArduinoColorGraphicsElementDrawText4;
} // Instances

namespace Types
{
typedef Mitov::GraphicsElementTextField<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  Mitov::ConstantProperty<7, bool, true >, // AutoSize
  Mitov::ConstantPropertyColor<4, Mitov::TAlphaColor, uint32_t, 0xFF1E90FF >, // Color
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::ConstantPropertyColor<12, Mitov::TAlphaColor, uint32_t, 0x00000000 >, // FillColor
  Mitov::NoFont, // Font
  Mitov::ConstantProperty<11, Mitov::TArduinoTextHorizontalAlign, Mitov::thaLeft >, // HorizontalAlign
  Mitov::VariablePropertyString<16, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::RGBColorOperations, // OPERATIONS
  Mitov::ConstantProperty<13, uint32_t, 3 >, // Size
  Mitov::ConstantProperty<9, bool, false >, // UseCodePage437Symbols
  Mitov::ConstantProperty<10, uint32_t, 6 >, // Width
  Mitov::ConstantProperty<8, bool, true >, // Wrap
  Mitov::ConstantProperty<5, int32_t, 120 >, // X
  Mitov::ConstantProperty<6, int32_t, 20 > // Y
   > TArduinoColorGraphicsElementTextFeld4;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementTextFeld4 TArduinoColorGraphicsElementTextFeld4;
} // Instances

namespace Types
{
typedef Mitov::GraphicsColorRepeatElementDrawBitmap_565<
  Declarations::Types::TTTGOTDisplayESP32DisplayModule1, // 0_TYPE_OWNER
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1, // 1_NAME_OWNER
  1690, // COUNT
  Mitov::ConstantProperty<8, bool, false >, // Centered
  Mitov::ConstantPropertyArray<22, uint8_t, uint8_t, ::VisuinoConstants::ArrayValue0, 8450>, // DATA
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  60, // HEIGHT
  Mitov::ConstantProperty<7, uint32_t, 1 >, // Size
  120, // WIDTH
  Mitov::ConstantProperty<4, int32_t, 112 >, // X
  Mitov::ConstantProperty<5, int32_t, 60 > // Y
   > TArduinoColorGraphicsElementDrawBitmap1;
} // Types

namespace Instances
{
Types::TArduinoColorGraphicsElementDrawBitmap1 TArduinoColorGraphicsElementDrawBitmap1;
} // Instances

namespace Types
{
typedef Mitov::MitovHTTPClient<
  Declarations::Types::TArduinoESP32WiFiTCPSecureClientSocket1, // 0_SOCKET_TYPE_PIN
  Declarations::Instances::TArduinoESP32WiFiTCPSecureClientSocket1, // 1_SOCKET_NAME_PIN
  1, // COUNT_Requests
  Mitov::ConstantProperty<9, bool, true >, // ConfigureSocket
  Mitov::TypedVariable<12, bool, ::ComponentVariables::Variable12 >, // FCollectBuffer
  Mitov::TypedVariable<18, bool, ::ComponentVariables::Variable15 >, // FDetectedCR
  Mitov::TypedVariable<20, bool, ::ComponentVariables::Variable16 >, // FDetectedNL
  Mitov::TypedVariable<10, uint32_t, ::ComponentVariables::Variable11 >, // FEndTime
  Mitov::TypedVariable<14, bool, ::ComponentVariables::Variable13 >, // FInProcessingContent
  Mitov::TypedVariable<16, bool, ::ComponentVariables::Variable14 >, // FNewLineDetected
  Mitov::TypedVariable<7, uint32_t, ::ComponentVariables::Variable10 >, // FRequestIndex
  Mitov::ConstantPropertyString<5, ::VisuinoConstants::TextValue3 >, // Host
  Mitov::EmbeddedCallChain<CallChains::ProcessData1 >, // Requests_ProcessData
  Mitov::ConstantPropertyString<6, ::VisuinoConstants::TextValue0 >, // UserAgent
  Mitov::ConstantPropertyString<4, ::VisuinoConstants::TextValue9 > // Version
   > HTTPClient1;
} // Types

namespace Instances
{
Types::HTTPClient1 HTTPClient1;
} // Instances

namespace Types
{
typedef Mitov::MitovHTTPClientRequest<
  Declarations::Types::HTTPClient1, // 0_TYPE_OWNER
  Declarations::Instances::HTTPClient1, // 1_NAME_OWNER
  Mitov::ConstantPropertyString<5, ::VisuinoConstants::TextValue11 >, // CacheControl
  Mitov::ConstantProperty<3, bool, true >, // ClockInputPin_o_IsConnected
  Mitov::ConstantPropertyString<6, ::VisuinoConstants::TextValue12 >, // Connection
  Mitov::ConstantPropertyString<8, ::VisuinoConstants::TextValue0 >, // Content
  Mitov::ConstantProperty<7, bool, false >, // ContentLength
  Mitov::ConstantPropertyString<4, ::VisuinoConstants::TextValue10 >, // ContentType
  Mitov::TypedVariable<18, bool, ::ComponentVariables::Variable17 >, // FClocked
  Mitov::EmbeddedCallChain<CallChains::AddFields1 >, // Fields_AddFields
  Mitov::TArduinoNetworkProtocolsHTTPClientRequestGET, // IMPLEMENTATION
  0, // INDEX
  Mitov::NestedProperty<15, Mitov::TArduinoNetworkProtocolsHTTPClientRequestResponse<
    Mitov::GenericPin_EmbeddedPinImplementation<12, ::PinCalls::PinCallerReceive3 >, // ContentOutputPin
    Mitov::GenericPin_NoImplementation<11 >, // OutputPin
    Mitov::TypedPin_NoImplementation<13, uint32_t >, // StatusCodeOutputPin
    Mitov::ClockPin_NoImplementation<14 > // TimeoutOutputPin
     > >, // Response
  Mitov::ConstantProperty<16, uint32_t, 15000 >, // Timeout
  Mitov::ConstantPropertyString<17, ::VisuinoConstants::TextValue13 > // URL
   > TArduinoNetworkProtocolsHTTPClientRequestGET1;
} // Types

namespace Instances
{
Types::TArduinoNetworkProtocolsHTTPClientRequestGET1 TArduinoNetworkProtocolsHTTPClientRequestGET1;
} // Instances

namespace Types
{
typedef Mitov::SplitJSON<
  Mitov::EmbeddedCallChain<CallChains::ExtractElement1 >, // Elements_ExtractElement
  Mitov::EmbeddedCallChain<CallChains::SendValue1 >, // Elements_SendValue
  Mitov::EmbeddedCallChain<CallChains::StartSplit1 >, // Elements_StartSplit
  Mitov::ClockPin_NoImplementation<4 >, // ErrorOutputPin
  Mitov::NestedProperty<9, Mitov::TArduinoSplitJSONObjectUnprocessed<
    Mitov::TextPin_NoImplementation<7 >, // NameOutputPin
    Mitov::TextPin_NoImplementation<8 > // ValueOutputPin
     > > // Unprocessed
   > SplitJSON1;
} // Types

namespace Instances
{
Types::SplitJSON1 SplitJSON1;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable18 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue14 >, // Name
  Mitov::TextPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive4 > // OutputPin
   > TArduinoSplitJSONTextElement1;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement1 TArduinoSplitJSONTextElement1;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable19 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue15 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement2;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement2 TArduinoSplitJSONTextElement2;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable20 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue16 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement3;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement3 TArduinoSplitJSONTextElement3;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable21 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue17 >, // Name
  Mitov::TextPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive5 > // OutputPin
   > TArduinoSplitJSONTextElement4;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement4 TArduinoSplitJSONTextElement4;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable22 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue18 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement5;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement5 TArduinoSplitJSONTextElement5;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable23 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue19 >, // Name
  Mitov::TextPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive6 > // OutputPin
   > TArduinoSplitJSONTextElement6;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement6 TArduinoSplitJSONTextElement6;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable24 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue20 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement7;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement7 TArduinoSplitJSONTextElement7;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable25 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue21 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement8;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement8 TArduinoSplitJSONTextElement8;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable26 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue22 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement9;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement9 TArduinoSplitJSONTextElement9;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable27 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue23 >, // Name
  Mitov::TextPin_NoImplementation<3 > // OutputPin
   > TArduinoSplitJSONTextElement10;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement10 TArduinoSplitJSONTextElement10;
} // Instances

namespace Types
{
typedef Mitov::SplitJSONTextElement<
  Mitov::ConstantProperty<2, bool, true >, // Enabled
  Mitov::TypedVariable<5, bool, ::ComponentVariables::Variable28 >, // FExtracted
  Mitov::VariablePropertyString<4, ::VisuinoConstants::TextValue0 >, // InitialValue
  Mitov::ConstantPropertyString<1, ::VisuinoConstants::TextValue24 >, // Name
  Mitov::TextPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive7 > // OutputPin
   > TArduinoSplitJSONTextElement11;
} // Types

namespace Instances
{
Types::TArduinoSplitJSONTextElement11 TArduinoSplitJSONTextElement11;
} // Instances

namespace Types
{
typedef Mitov::ClockGenerator<
  Mitov::ConstantProperty<4, bool, true >, // Enabled
  Mitov::ConstantPropertyFloat<5, float, ::VisuinoConstants::FloatValue2 >, // Frequency
  Mitov::ClockPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive8 > // OutputPin
   > ClockGenerator1;
} // Types

namespace Instances
{
Types::ClockGenerator1 ClockGenerator1;
} // Instances

namespace Types
{
typedef Mitov::CharToText<
  Mitov::EmbeddedCallChain<CallChains::IsEnding1 >, // Elements_IsEnding
  Mitov::ConstantProperty<4, bool, true >, // Enabled
  Mitov::ConstantProperty<14, bool, true >, // EndOnNewLine
  Mitov::TypedVariable<9, uint32_t, ::ComponentVariables::Variable29 >, // FIndex
  2000, // MaxLength
  Mitov::TextPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive9 >, // OutputPin
  Mitov::ConstantProperty<12, bool, false >, // Truncate
  Mitov::ConstantProperty<13, bool, false > // UpdateOnEachChar
   > CharToText1;
} // Types

namespace Instances
{
Types::CharToText1 CharToText1;
} // Instances

namespace Types
{
typedef Mitov::Delay<
  Mitov::ConstantProperty<8, bool, true >, // CanRestart
  Mitov::ConstantProperty<4, bool, true >, // Enabled
  Mitov::TypedVariable<9, bool, ::ComponentVariables::Variable30 >, // FValue
  Mitov::ConstantProperty<7, uint32_t, 2000000 >, // Interval
  Mitov::ClockPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive10 > // OutputPin
   > Delay1;
} // Types

namespace Instances
{
Types::Delay1 Delay1;
} // Instances

} // Declarations

// Type Converters

namespace TypeConverters
{
Mitov::Convert_BinaryBlockToChar Converter0;
Mitov::Convert_BinaryToClock<Mitov::TypedVariable<0, bool, ::ComponentVariables::Variable31 >> Converter1;
Mitov::Convert_BinaryToClock<Mitov::TypedVariable<0, bool, ::ComponentVariables::Variable32 >> Converter2;
} // TypeConverters

// Call Chains

namespace CallChains
{
void IsEnabled1::Call( int32_t AIndex, bool & AValue )
{
  switch( AIndex )
  {
    case 0: Declarations::Instances::TArduinoESP32WiFiModuleRemoteAccessPoint1.IsEnabled( AValue ); break;
  }
}

void TryConnect1::Call( int32_t AIndex, bool & AValue )
{
  switch( AIndex )
  {
    case 0: Declarations::Instances::TArduinoESP32WiFiModuleRemoteAccessPoint1.TryConnect( AValue ); break;
  }
}

void AssignDNS1::Call( int32_t AIndex )
{
  switch( AIndex )
  {
    case 0: Declarations::Instances::TArduinoESP32WiFiModuleRemoteAccessPoint1.AssignDNS(); break;
  }
}

void StopSocket1::Call()
{
  Declarations::Instances::TArduinoESP32WiFiTCPSecureClientSocket1.StopSocket();
}

void Render1::Call()
{
  Declarations::Instances::TArduinoColorGraphicsElementDrawText1.Render();
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld1.Render();
  Declarations::Instances::TArduinoColorGraphicsElementDrawText2.Render();
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld2.Render();
  Declarations::Instances::TArduinoColorGraphicsElementDrawText3.Render();
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld3.Render();
  Declarations::Instances::TArduinoColorGraphicsElementDrawText4.Render();
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld4.Render();
  Declarations::Instances::TArduinoColorGraphicsElementDrawBitmap1.Render();
}

void ProcessData1::Call( int32_t AIndex, void * AData )
{
  switch( AIndex )
  {
    case 0: Declarations::Instances::TArduinoNetworkProtocolsHTTPClientRequestGET1.ProcessData( AData ); break;
  }
}

void AddFields1::Call( String & AText )
{
}

void StartSplit1::Call()
{
  Declarations::Instances::TArduinoSplitJSONTextElement1.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement2.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement3.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement4.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement5.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement6.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement7.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement8.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement9.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement10.StartSplit();
  Declarations::Instances::TArduinoSplitJSONTextElement11.StartSplit();
}

void SendValue1::Call()
{
  Declarations::Instances::TArduinoSplitJSONTextElement1.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement2.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement3.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement4.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement5.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement6.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement7.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement8.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement9.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement10.SendValue();
  Declarations::Instances::TArduinoSplitJSONTextElement11.SendValue();
}

void ExtractElement1::Call( const char * AName, Mitov::String & AText, bool & AResult )
{
  Declarations::Instances::TArduinoSplitJSONTextElement1.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement2.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement3.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement4.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement5.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement6.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement7.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement8.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement9.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement10.ExtractElement( AName, AText, AResult );
  Declarations::Instances::TArduinoSplitJSONTextElement11.ExtractElement( AName, AText, AResult );
}

void IsEnding1::Call( bool & AResult )
{
}

} // CallChains

// Pin Call Declarations

namespace PinCalls
{
void PinCallerConverterReceive1( void *_Data );
void PinCallerConverterReceive2( void *_Data );
void PinCallerConverterReceive3( void *_Data );
} // PinCalls

// Pin Call Implementations

namespace PinCalls
{
void PinCallerReceive0::Notify( void *_Data )
{
  TypeConverters::Converter1.Convert( _Data, PinCallerConverterReceive1 );
}

void PinCallerConverterReceive1( void *_Data )
{
  Declarations::Instances::TArduinoNetworkProtocolsHTTPClientRequestGET1.ClockInputPin_o_Receive( _Data );
}
void PinCallerReceive2::Notify( void *_Data )
{
  TypeConverters::Converter2.Convert( _Data, PinCallerConverterReceive2 );
}

void PinCallerConverterReceive2( void *_Data )
{
  Declarations::Instances::Delay1.StartInputPin_o_Receive( _Data );
}
void PinCallerReceive1::Notify( void *_Data )
{
  Declarations::Instances::HTTPClient1._DirectPinReceive( _Data );
}

void PinCallerReceive3::Notify( void *_Data )
{
  TypeConverters::Converter0.Convert( _Data, PinCallerConverterReceive3 );
}

void PinCallerConverterReceive3( void *_Data )
{
  Declarations::Instances::CharToText1.InputPin_o_Receive( _Data );
}
void PinCallerReceive4::Notify( void *_Data )
{
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld3.InputPin_o_Receive( _Data );
}

void PinCallerReceive5::Notify( void *_Data )
{
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld1.InputPin_o_Receive( _Data );
}

void PinCallerReceive6::Notify( void *_Data )
{
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld4.InputPin_o_Receive( _Data );
}

void PinCallerReceive7::Notify( void *_Data )
{
  Declarations::Instances::TArduinoColorGraphicsElementTextFeld2.InputPin_o_Receive( _Data );
}

void PinCallerReceive8::Notify( void *_Data )
{
  Declarations::Instances::TArduinoNetworkProtocolsHTTPClientRequestGET1.ClockInputPin_o_Receive( _Data );
}

void PinCallerReceive9::Notify( void *_Data )
{
  Declarations::Instances::SplitJSON1.InputPin_o_Receive( _Data );
}

void PinCallerReceive10::Notify( void *_Data )
{
  Declarations::Instances::CharToText1.ClockInputPin_o_Receive( _Data );
  Declarations::Instances::TArduinoESP32WiFiTCPSecureClientSocket1.DisconnectInputPin_o_Receive( _Data );
}

} // PinCalls

namespace ComponentsHardware
{
void SystemUpdateHardware()
{
}
} // ComponentsHardware

//The setup function is called once at startup of the sketch
void setup()
{
  BoardDeclarations::Instances::BoardSPI1.SystemInit();
  Declarations::Instances::TArduinoESP32WiFiModule1.SystemInit();
  Declarations::Instances::TArduinoESP32WiFiTCPSecureClientSocket1.SystemInit();
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1.SystemInit();
  Declarations::Instances::ClockGenerator1.SystemInit();
  Declarations::Instances::TArduinoESP32WiFiModule1.SystemStart();
  Declarations::Instances::TTTGOTDisplayESP32DisplayModule1.SystemStart();
  Declarations::Instances::ClockGenerator1.SystemStart();
}

// The loop function is called in an endless loop
void loop()
{
  Declarations::Instances::TArduinoESP32WiFiModule1.SystemLoopBegin();
  Declarations::Instances::TArduinoESP32WiFiTCPSecureClientSocket1.SystemLoopBegin();
  Declarations::Instances::TArduinoNetworkProtocolsHTTPClientRequestGET1.SystemLoopBegin();
  Declarations::Instances::ClockGenerator1.SystemLoopBegin();
  Declarations::Instances::Delay1.SystemLoopBegin();
}
