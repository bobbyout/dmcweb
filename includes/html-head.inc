
    <meta http-equiv="Content-Type"  content="text/html; charset=iso-8859-1">
    <meta http-equiv="Expires"       content="Sat, 01 Dec 2001 00:00:00 GMT" />
    <meta http-equiv="Cache-Control" content="no-store, no-cache, must-revalidate, max-age=0" />
    <meta http-equiv="Pragma"        content="no-cache" />

    <link rel="stylesheet" href="/dmc.css" type="text/css">

    <script language="JavaScript" src="javascript/myDynFader.js" />

    <script language="JavaScript">
      function runInfo() {
        // create fader
        var fader = new DynFader();
        // add text
        fader.addText('Neue Heimanlage in Duisburg-Ungelsheim!');
        fader.addText('Zweiter Text zum Test!!!');
        // set parameters
        fader.attachPlaceHolder("InfoBox");
        fader.setFont('Arial', 'normal', 'center');
        fader.setFontSize(8);
        fader.setDirection(1);
        fader.setSpeed(1);
        fader.setPauseMidInterval(0);
        fader.setTextColor('#0066FF');
        // start
        fader.beginFade();
      }
    </script>
