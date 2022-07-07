# DIY Glove Controlled Robotic Hand
Control a servo motor hand with the power of a glove and DIY flex sensors!

## About
This project uses budget items and DIY parts to create a fully functional robotic hand that can be controlled by a glove with flex sensors. It is an introduction project to the world of biomechanical engineering and design. Starting from the basic building blocks of foam and string, you will explore how physical mechanics are combined with electronic parts to form an attention grabbing project.

<img src="https://user-images.githubusercontent.com/41922343/177880407-695eacb5-2a8c-486d-9a9b-add045eda84e.png" width=81% height=81%>

[![Glove Controlled Robotic Hand Demo](https://i.imgur.com/FJCvUu7.png)](https://youtu.be/q-6LHwicius "Glove Controlled Robotic Hand Demo - Click to Watch!")

## Design
Rudimentary drawings of how the robotic hand and glove controller work. These pictures are not accurate to the final product but provide a basic explanation of the mechanics behind the project.

<details>
  <summary><b>Design Drawings</b></summary>
  
  **Fingers** - Spring structure inside pulled by string/fishing wire
  <img src="https://i.imgur.com/ycROA7n.png">

  **Full Hand** - Combining five fingers and servo motors for individual control
  <img src="https://i.imgur.com/ywRPKna.png">

  **Control Methods** - Glove was chosen over muscle control due to the high cost of the EMG Sensor
  <img src="https://user-images.githubusercontent.com/41922343/177880245-11a91084-4879-46a1-9d0b-6a728497ff30.png" width=67% height=67%>
</details>

## Hand Construction
First, create fingers out of foam, springs, tape, and string. Each finger consists of three foam bases (two for the thumb) and a spring embedded through the center of it. String is hot glued to the top foam piece and guided down inside the foam piece. Lastly, tape is used to protect and cover up the foam. I recommend not using insulation foam like I did because it is very difficult to cut into.

<details>
  <summary><b>Finger Building Process</b></summary>
  <p float="left">
    <img src="https://user-images.githubusercontent.com/41922343/177881087-bb45caf2-1e39-4ad8-aaac-7eb4636e714c.png" width=20% height=20%>
    <img src="https://user-images.githubusercontent.com/41922343/177881117-441161b8-287d-4a71-a447-1e79ee7d26d1.png" name="image-name" width=26.6% height=26.6%>
    <img src="https://hackster.imgix.net/uploads/attachments/1310372/close_FhdohgYuJ4.png?auto=compress%2Cformat&w=1280&h=960&fit=max" name="image-name" width=25% height=25%>
  </p>
</details>

It's important to have a section of the spring poking out from underneath the base of the finger. I did not have this for all my fingers so I soldered on another spring to the bottom to increase the length. An alternative method is to use a toothpick as a base, but your hand will not bend on the palm.

<details>
  <summary><b>Complete Fingers</b></summary>
  <img src="https://hackster.imgix.net/uploads/attachments/1310373/inkedimg_8223_li_ansnFo9yMA.jpg?auto=compress%2Cformat&w=680&h=510&fit=max" width=60% height=60%>
</details>

Next construct the palm and the arm base. I don't have much documentation of this process, but this should be pretty straightforward. Tracing my hand, I carved a palm like shape to hold all my fingers. Create holes on the top of the palm to hold the fingersThe arm base holds at least 5 servos and an Arduino Uno together. It measures 8x2.5x.5 inches on my project. Make sure the strings are able to be pulled from the base. Use staples on the palm as brackets to guide the strings to servo motors. Create indents and glue down servo motors.

<details>
  <summary><b>Full Hand Strings Demo</b></summary>
  <p float="left">
    <img src="https://hackster.imgix.net/uploads/attachments/1310376/img_8233_(1)_08piBoNNtl.jpg?auto=compress%2Cformat&w=680&h=510&fit=max" width=25% height=25%>
    <a href="https://youtu.be/re6DjKmTcHc">
      <img src="https://user-images.githubusercontent.com/41922343/177882607-3222aa45-adf6-47d0-a6b9-66a14ca1bcdf.png" width=59% height=59%>
    </a>
  </p>
</details>

Guide the strings through the servo motor arm and hot glue it down when it is taut. Mount the Arduino Uno onto the bottom of the arm and attach a breadboard to the back. Organize wires with rubber bands/zip ties and connect all servo motors to the power rails on the breadboard. Lastly, connect the signal lines on the servo motors to the digital pins on the Arduino board. Use 4AA battery pack to power ONLY the servo motors. Wiring and construction of the hand is done for now. Arduino Uno can be programmed to control the servo motors now.

<details>
  <summary><b>Front and Back of Complete Hand</b></summary>
  <p float="left">
    <img src="https://hackster.imgix.net/uploads/attachments/1310379/img_8334_73jYjDlUvm.JPG?auto=compress%2Cformat&w=680&h=510&fit=max" width=32% height=32%>
    <img src="https://hackster.imgix.net/uploads/attachments/1310381/img_8321_ttW9pnXUSP.JPG?auto=compress%2Cformat&w=680&h=510&fit=max" width=57% height=57%>
  </p>
</details>

<a href="https://youtu.be/uvlc4CyMTzs">
  <img src="https://user-images.githubusercontent.com/41922343/177883002-0b1ea35c-b9b6-48bb-be89-33eb4fb135fd.png" width=70% height=70%>
</a>

## Glove Construction
The most important part of the glove controller are the flex sensors. Rather than buying 5 sensors for 100 dollars, it's possible to DIY them. This is where you use paper and pencil, flexible plastic, and tape. Follow along with this [video](https://youtu.be/SJNYbSpvlP8) to construct the flex sensors. Captions are in English.

<detail>
  <summary>Flex Sesnor Building Process</summary>

## Coding

In the coding section provided, its important to realize that parameters will be different depending on each flex sensor and servo motor. In order to organize values clearly, I included the flexTest() function to test values for the flex sensors.

## Circuit Diagram
