int main(){
    float m, km;
    printf("RA2211042010057\n");
    printf("Enter the distance (in meters): ");
    scanf("%f", &m);
    
    km = m / 1000;
    
    printf("%.2f meters = %.2f Kilo meters", m, km);
    return 0;
}
