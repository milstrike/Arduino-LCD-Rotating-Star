# Arduino LCD Rotating Star
<strong>For the preview, watch the video below:</strong><br/>
<a href="https://www.youtube.com/watch?v=dOTln1ym5_k" target="_blank"><img src="https://img.youtube.com/vi/dOTln1ym5_k/0.jpg"></a>
<h2>Tested with Arduino Mega 2560 & Arduino Uno</h2>
<strong>This Source code only suitable for 16x2 LCD with I2C</strong><br/>

<h2>Library You Need:</h2>
<ol>
  <li>Wire.h</li>
  <li>LCD.h</li>
  <li>LiquidCrystal_I2C.h</li>
</ol>

<strong>Please scan your LCD address first before use this source code.!</strong>

<h2>Instant Usage:</h2>
<ol>
  <li><strong>Setting for Character:</strong><br/>
    Change the character on: <strong>String character</strong><br/>
    <strong>DEFAULT:</strong> String character = "*"; <br/>
    You can change the character at will. For example: <strong>String character = "#";</strong><br/>
    <u>NOTES: </u> make sure there's no white space before or after the character.
  </li>
  <li><strong>Setting for rotation speed:</strong><br/>
    To set the rotation speed, please change the variable on: <strong>int delays = 50;</strong><br/>
    <u>NOTES: in millis</u>
  </li>
</ol>
<h1>Have Fun!</h1
