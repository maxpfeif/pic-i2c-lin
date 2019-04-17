# pic-i2c-lin

Firmware for PIC16F1718 as an I2C to LIN transceiver. 

This specific implimentation uses the MPLAB X MCC generated code for both a LIN master and I2C slave interface. 

Some nuances discovered during debugging; 
  - You may need to shift the I2C slave address to make room for the read/write bit depending on how your master transmitts. 
  - You MUST enable clock shifting or else the module will fail to ACK bits sent to it, holding SCL low
  
Licensed MIT and as an extension, the MCC license still applies to their code. 
