
const pin_t MY_LED = D7;

int BUTTON_PIN = D3;


SYSTEM_THREAD(ENABLED);


void setup()
{
	pinMode(BUTTON_PIN , INPUT_PULLUP);
	pinMode(MY_LED, OUTPUT);
}

//Setting up flashing order
void name()
{
    //M  (--)
    digitalWrite(MY_LED, HIGH);   
    delay(1s);                       
    digitalWrite(MY_LED, LOW);    
    delay(500ms);                     
    digitalWrite(MY_LED, HIGH);   
    delay(1s);                       
    digitalWrite(MY_LED, LOW);    
    delay(2s);                     
        
    //I  (..)
    digitalWrite(MY_LED, HIGH);   
    delay(500ms);                       
    digitalWrite(MY_LED, LOW);    
    delay(500ms);                     
    digitalWrite(MY_LED, HIGH);   
    delay(500ms);                       
    digitalWrite(MY_LED, LOW);    
    delay(2s); 
        
    //C (-.-.)
    digitalWrite(MY_LED, HIGH);   
    delay(1s);                       
    digitalWrite(MY_LED, LOW);    
    delay(500ms);                     
    digitalWrite(MY_LED, HIGH);   
    delay(500ms);                       
    digitalWrite(MY_LED, LOW);    
    delay(500ms);   
    digitalWrite(MY_LED, HIGH);   
    delay(1s);                       
    digitalWrite(MY_LED, LOW);    
    delay(500ms);                     
    digitalWrite(MY_LED, HIGH);   
    delay(500ms);                       
    digitalWrite(MY_LED, LOW);    
    delay(2s);	
        
    //H  (....)
    digitalWrite(MY_LED, HIGH);   
    delay(500ms);                       
    digitalWrite(MY_LED, LOW);    
    delay(500ms);                     
    digitalWrite(MY_LED, HIGH);   
    delay(500ms);                       
    digitalWrite(MY_LED, LOW);    
    delay(500ms);	
    digitalWrite(MY_LED, HIGH);   
    delay(500ms);                       
    digitalWrite(MY_LED, LOW);    
    delay(500ms);                     
    digitalWrite(MY_LED, HIGH);   
    delay(500ms);                       
    digitalWrite(MY_LED, LOW);    
    delay(2s);
        
    //A  (.-)
    digitalWrite(MY_LED, HIGH);   
    delay(500ms);                       
    digitalWrite(MY_LED, LOW);    
    delay(500ms);                     
    digitalWrite(MY_LED, HIGH);   
    delay(1s);                       
    digitalWrite(MY_LED, LOW);    
    delay(2s);   
        
    //E  (.)
    digitalWrite(MY_LED, HIGH);   
    delay(500ms);                       
    digitalWrite(MY_LED, LOW);    
    delay(2s);                     
        
    //L  (.-..)
    digitalWrite(MY_LED, HIGH);   
    delay(500ms);                       
    digitalWrite(MY_LED, LOW);    
    delay(500ms);                     
    digitalWrite(MY_LED, HIGH);   
    delay(1s);                       
    digitalWrite(MY_LED, LOW);    
    delay(500ms); 
    digitalWrite(MY_LED, HIGH);   
    delay(500ms);                       
    digitalWrite(MY_LED, LOW);    
    delay(500ms);
    digitalWrite(MY_LED, HIGH);   
    delay(500ms);                       
    digitalWrite(MY_LED, LOW);    
    delay(4s);
        	
} 

void loop()
{
    int button_state = digitalRead( BUTTON_PIN );
	
	
	if(button_state == LOW)
    {
       name();
    }
    
    else
    {
        digitalWrite(MY_LED, LOW);    
    }
}
