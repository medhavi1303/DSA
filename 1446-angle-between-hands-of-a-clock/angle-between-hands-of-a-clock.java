class Solution {
    public double angleClock(int hour, int minutes) {
        double hh, mh;
        if(hour!=12) hh=(hour*60+minutes)*0.5;
        else{
            hh=minutes*0.5;
        }
        mh=minutes*6;
        double ang=Math.abs(hh-mh);
        return Math.min(ang,360-ang);
    }
}