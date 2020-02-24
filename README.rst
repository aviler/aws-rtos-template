*************************
:shell: aws-rtos-template
*************************

Template where you can build Amazon Free-RTOS (https://github.com/aws/amazon-freertos) projects on top of it.


Usage
#####

**Build**

Follow the steps described here[doc link]

**Running**

Build and flash it into your esp32. It just outputs log messages every 500 miliseconds.


Directories
###########

config/
 - Current solution to have your own amazon services/iot/mqtt configuration overriding and outside components/aws-rtos directory.

components/
 - Where to add any other library that you need or built yourself.

components/aws-rtos/
 - Git submodule that points to the amazon freertos repository with freertos kernel and amazon libraries.

src/
 - Where our application code goes.

docs/
 - Your project docs goes here.

test/
 - Your unit tests goes here.


TO DO
#####

- Your IoT project
- Examples of mqtt/ble/other in separate branches


Notes
#####


Changelog
#########

 - 0.0.1 - First draft