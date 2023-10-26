const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<style>
.card{
    max-width: 400px;
     min-height: 250px;
     background: #02b875;
     padding: 30px;
     box-sizing: border-box;
     color: #FFF;
     margin:20px;
     box-shadow: 0px 2px 18px -4px rgba(0,0,0,0.75);
}
</style>
<body>

<div class="card">
  <h4>Pendulo Invertido - Vega Ferreria</h4><br>
  <h1>Accelerometer Value: <span id="acc_val">0</span></h1><br>
  <h1>Angle Value: <span id="angle_val">0</span></h1><br>
</div>
<script>

setInterval(function() {
  getData();
}, 300); //300mSeconds update rate // HERE DELAY

function getData() {
  var xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
      document.getElementById("acc_val").innerHTML = response.accelerometer;
      document.getElementById("angle_val").innerHTML = response.angle;
      window.AppInventor.setWebViewString("Accelerometer: " + response.accelerometer + ", Angle: " + response.angle);
    }
  };
  xhttp.open("GET", "webServer", true);
  xhttp.send();
}
</script>
</body>
</html>
)=====";