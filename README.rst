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

**Directories**

amazon-freertos/
 - git submodule that points to the amazon freertos repository with freertos kernel and amazon libraries.

amazon-freertos-config/
 - Current solution to have your own amazon services/iot/mqtt configuration overriding and outside amazon-freertos directory.

components/
 - Where to add any other library that you need or built yourself.

src/
 - Where your application code goes.


TO DO
#####

- Your IoT project
- Examples of mqtt/ble/other in separate branches


Notes
#####


Changelog
#########

 - 0.0.3 - CMake hotfix
 - 0.0.2 - Directories restructuring
 - 0.0.1 - First draft