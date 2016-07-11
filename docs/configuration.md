To configure the app you have to go inside the bin/data folder and edit `config.xml`.

Configuration will differ from environment to environment. Important parameters
are UPLOADURL and LOCATIONID. UPLOADURL must be configured to point to a server
that can process data sent by the app, LOCATIONID will point where this data is
coming from and identify the device.

Setting up with supervisor
--------------------------

After building the app it would be expected for it to start up at every boot.
To help with that supervisor is a good candidate.

An example configuration:

    [program:footfall]
    ; this file belongs in /etc/supervisor/conf.d
    ; or wherever supervisor is configured to hold its configs
    command= /home/pi/footfal/of/apps/myApps/RPi2/bin/RPi2
    directory=/home/pi/footfal/of/apps/myApps/RPi2/
    umask=022
    autostart=true
    autorestart=true
    startsecs=10
    startretries=3
    exitcodes=0,2
    stopsignal=TERM
    stopwaitsecs=10
    stdout_logfile=/var/log/footfall.log
    redirect_stderr=true
    user=pi
