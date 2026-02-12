#define buzzer 11      // buzzer at pin 11
#define sensor 2       // IR sensor at pin 2

int sound = 250;       

void setup()
{
    Serial.begin(9600);

    pinMode(sensor, INPUT);
    pinMode(buzzer, OUTPUT);
}

void loop()
{
    int detect = digitalRead(sensor);   // read status of sensor

    if (detect == LOW)   // if sensor detects obstacle
    {
        tone(buzzer, sound);   // buzzer sounds
    }
    else
    {
        noTone(buzzer);   // stop the sound
    }
}
