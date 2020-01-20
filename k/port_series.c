
int *video_memory = (int *)0xB8000;
int cursor_x = 0;
int cursor_y = 0;


static void move_cursor()
{
    int cursorLocation = cursor_y * 80 + cursor_x;
    outb(0x3D4, 14);                  
    outb(0x3D5, cursorLocation >> 8);
    outb(0x3D4, 15);                  
    outb(0x3D5, cursorLocation);      
}
