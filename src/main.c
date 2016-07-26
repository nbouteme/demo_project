#include "a.h"
#include <libft/std.h>
#include "xmlx.h"

void draw_callback(void *u)
{
	t_xmlx_window *win = u;
	float *image = win->framebuffer->buffer;
	image[0] = 1.0f;
	image[1] = 0.0f;
	image[2] = 1.0f;
	image[3] = 1.0f;
	image[4] = 1.0f;
	image[5] = 0.0f;
	image[6] = 1.0f;
	image[7] = 1.0f;
	xmlx_present(win);
}

int main()
{
    xmlx_init();
	t_xmlx_window *win = xmlx_new_window(800, 600, "test", FLOAT);
	xmlx_run_window(win, draw_callback, win);
	xmlx_destroy();
    return 0;
}
