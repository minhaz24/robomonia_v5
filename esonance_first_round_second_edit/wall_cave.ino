void wall_cave() {
  digitalWrite(13, HIGH);
  while (sum == 0){
    check();
    sl = sonarl.ping_cm();
    if (sl != 0 && sl <= 7) motorSpeed(0, 100);
    else if (sl >= 9 && sl <= 12) motorSpeed(100, 0);
    else motorSpeed(150, 150);
  }
  digitalWrite(13, LOW);
  counter=1;
}

