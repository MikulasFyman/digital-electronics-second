# Lab 4: Mikuláš Fyman

### Stopwatch

1. Draw a flowchart for `TIMER2_OVF_vect` interrupt service routine which overflows every 16&nbsp;ms but it updates the stopwatch LCD screen approximately every 100&nbsp;ms (6 x 16&nbsp;ms = 100&nbsp;ms). Display tenths of a second, seconds, and minutes and let the stopwatch counts from `00:00.0` to `59:59.9` and then starts again. The image can be drawn on a computer or by hand. Use clear descriptions of the individual steps of the algorithms.

   <img width="812" alt="image" src="https://user-images.githubusercontent.com/99393884/197887549-d234c799-3c39-4338-9fdd-a673319a930a.png">

### Kitchen alarm

2. Draw a schematic of the kitchen alarm application that counts down the time with an LCD, one LED and three push buttons: start, +1 minute, -1 minute. Use the +1/-1 minute buttons to increment/decrement the timer value. After pressing the Start button, the countdown starts. The countdown value is shown on the display in the form of mm.ss (minutes.seconds). At the end of the countdown, the LED will start blinking. The image can be drawn on a computer or by hand. Always name all components and their values.

   <img width="758" alt="image" src="https://user-images.githubusercontent.com/99393884/197887392-11de518f-f670-4cf1-9639-1e88421cfff5.png">
