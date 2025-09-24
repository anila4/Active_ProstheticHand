# Prosthetic Hand Version 1.0

# Videos of arm operation and testing

https://drive.google.com/drive/folders/1HpFSmH2rINnw14tFB2x_1WkoJe5FNAJ1?usp=sharing

# Pictures of the arm operation and testing

![Circuit_Setup_2](https://github.com/user-attachments/assets/9178f329-37b1-43ee-835f-30bb98e7d1d5)
![Servos_Attached_1](https://github.com/user-attachments/assets/cd797e72-021a-47bd-b01a-dae80aa04ae3)
![Arduino_Connection_0](https://github.com/user-attachments/assets/5b252632-ac55-4e64-8c4b-50f085d5e936)
![Circuit_Testing_Setup_1](https://github.com/user-attachments/assets/a68fa965-1a53-403b-9119-691d4f24f33a)
![Assembled_Arm](https://github.com/user-attachments/assets/1b93d3b9-26de-430f-8570-d1fa138cc1b6)
![Assembled_Hand (no forearm)](https://github.com/user-attachments/assets/cb28449f-5a44-4c7d-b210-8c66204bf8e3)

# Design Process
This is my first attemp at designing a myoelectric arm, which is a type of prosthetic arm capable of moving depending on the electrical activity detected in the user's muscles. Ideally, this prosthetic would have the muscle sensors placed on the arm, then have the prosthetic slid overtop the sensors, ensuring minimal external noise and making it easier to set up and use for actual amputees. Unfortunately, I am unable to authentically test it since I still have both of my biological hands (meat, nevers, bones, and all), though if someone would be willing to test it out or use it, I'd be more than willing to provide them with a model. This version uses a simple muscle sensor with 3 probes to detect electrical activity within the user's muscles, then relay a reading value that corresponds to the intensity of the electrical muscle signal. The sensor sits connected to the Arduino, which processes the returned value from the sensor and can perform specific instructions based on these values, as seen below. 

![Muscle Sensor](https://github.com/user-attachments/assets/1c2cdaa2-7b93-447e-b8f6-0e8b439d6ba7)
![Sensor_Testing](https://github.com/user-attachments/assets/ba2ba76f-dc80-426c-80c1-68223ddf3210)

Also connected to the Arduino are a set of servo motors, each bound to a specific finger. The servo motors sit within the forearm, and are capable of moving each finger using both elastic string and nylon string (dollar store nylon and elastic string works perfectly fine as well). Each finger is double tied with nylon string onto the same servo horn, which not only spreads any load to the fingers evenly between the strings making them less likely to snap, but also ensure that in the case of a nylon string snapping, the second string acts as a redundancy so the user can continue using the finger (until the nylon string is replaced).

![Hand_Assembly_1](https://github.com/user-attachments/assets/4dd7f41e-ebb3-4715-9bbd-4844388966b4)
![Hand_Partial_Assembly](https://github.com/user-attachments/assets/099b1ee3-a580-4236-b209-d8a00384404a)
![Hand_Assembly_0](https://github.com/user-attachments/assets/c823615b-ac3b-48c1-9430-ab610f120ea7)
![Servos_Attached_0](https://github.com/user-attachments/assets/e4210778-d1fb-47c4-93fb-9d2c514d5854)


Using the Arduino, the specific reading values from the sensor can be used to control individual fingers, allowing the user to control and manipulate the arm without directly interacting with it, so long as the sensor is attached to a muscle group. The larger the muscle group, the easier it is for the sensor to detect muscle activity. Provided additional circuit elements and/or programming (or even simple push buttons), custom hand movements can also be implemented, such as gestures and grasping sensitivity.

![Circuit_Testing_Setup_1](https://github.com/user-attachments/assets/1f169f22-70e7-47f6-8f30-d4c0f0166850)

FUN FACT: The sensor will function with any muscle group, meaning you can even attach the probes to your face, and the arm will move according to however you're talking (due to facial muscle activity). This is ot recommended of course, but can help with testing appropriate threshold values for servo activation (plus it can be pretty funny to watch).

![Assembled_Arm](https://github.com/user-attachments/assets/a3be2c58-07ae-4959-9414-4b45a72b351e)


The final product is a fully functional prosthetic hand that moves according to muscle movement, and can even perform tasks such as grabbing bags and tools. The arm was capable of lifting upwards of 5 pounds before any performance drops, and even 8-10 pounds (depending on grip) before giving out, all whilst weighing less than 3 pounds. It is important to note that, with gesture control, there are gestures that should and shouldn't be used (I do not condone any obscene gestures made using this device). I've taken the creative liberty to customize the model as well, giving a more mecha look to the design (with a small emblem for my robotics background).

![Final_Product (with colors)](https://github.com/user-attachments/assets/98e3efc4-739c-44d9-9358-5e2bb802eb85)

Overall, I've really enjoyed this personal project, as I've not only expanded my knowledge on signal filtering circuits and embedded systems design, but I also feel like this device could really help someone who could use it. If I could improve upon anything, I would likely start by using a better material for the entire arm body (currently PLA) or better servo motors for greater strength. The muscle sensor could also be improved to detect more inputs, which could allow for more precise control without the extra programming/electrical hassle. Still, I look forward to improving upon this design in the future.

This is my finger print (get it?)

![Finger_Print (get it_)](https://github.com/user-attachments/assets/996d2e5e-7ea1-4f03-b363-2ad88539dac5)



