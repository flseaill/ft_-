#ifndef FDF_H

# define WIDTH					2560
# define HEIGHT					1440

// DEFINITIONS D'ECRAN
# define WIDTH_720p				1280
# define HEIGHT_720p			720
# define WIDTH_1080p			1920
# define HEIGHT_1080p			1080
# define WIDTH_WUXGA			1920
# define HEIGHT_WUXGA			1200
# define WIDTH_2K				2048
# define HEIGHT_2K				1280
# define WIDTH_UHD				3840
# define HEIGHT_UHD				2160
# define WIDTH_4K				4096
# define HEIGHT_4K				3240
# define WIDTH_8K				7680
# define HEIGHT_8K				4320

// MACROS TOUCHES CLAVIER
# define MLX_KEY_LEFT			65361
# define MLX_KEY_RIGHT			65363
# define MLX_KEY_UP				65362
# define MLX_KEY_DOWN			65364
# define MLX_KEY_ESC			65307
# define MLX_KEY_TAB			65289
# define MLX_KEY_INS			65379
# define MLX_KEY_HOME			65360
# define MLX_KEY_PGUP			65365
# define MLX_KEY_PGDN			65366
# define MLX_KEY_END			65367
# define MLX_KEY_DEL			65535
# define MLX_KEY_BACKSPACE		65288
# define MLX_KEY_ENTER			65293
# define MLX_KEY_SHIFT			65505
# define MLX_KEY_CAPS			65509
# define MLX_KEY_CTRL			65507
# define MLX_KEY_ALT			65513
# define MLX_KEY_F1				65470
# define MLX_KEY_F2				65471
# define MLX_KEY_F3				65472
# define MLX_KEY_F4				65473
# define MLX_KEY_F5				65474
# define MLX_KEY_F6				65475
# define MLX_KEY_F7				65476
# define MLX_KEY_F8				65477
# define MLX_KEY_F9				65478
# define MLX_KEY_F10			65479
# define MLX_KEY_F11			65480
# define MLX_KEY_F12			65481
# define MLX_KEY_PRINT_SCREEN	65377
# define MLX_KEY_NUM_LOCK		65407
# define MLX_KEY_PAUSE			65299
# define MLX_KEY_WINDOWS		65515
# define MLX_KEY_MINUS			45
# define MLX_KEY_EQUAL			61
# define MLX_KEY_SPACE			32
# define MLX_KEY_0				48
# define MLX_KEY_1				49
# define MLX_KEY_2				50
# define MLX_KEY_3				51
# define MLX_KEY_4				52
# define MLX_KEY_5				53
# define MLX_KEY_6				54
# define MLX_KEY_7				55
# define MLX_KEY_8				56
# define MLX_KEY_9				57
# define MLX_KEY_A				97
# define MLX_KEY_B				98
# define MLX_KEY_C				99
# define MLX_KEY_D				100
# define MLX_KEY_E				101
# define MLX_KEY_F				102
# define MLX_KEY_G				103
# define MLX_KEY_H				104
# define MLX_KEY_I				105
# define MLX_KEY_J				106
# define MLX_KEY_K				107
# define MLX_KEY_L				108
# define MLX_KEY_M				109
# define MLX_KEY_N				110
# define MLX_KEY_O				111
# define MLX_KEY_P				112
# define MLX_KEY_Q				113
# define MLX_KEY_R				114
# define MLX_KEY_S				115
# define MLX_KEY_T				116
# define MLX_KEY_U				117
# define MLX_KEY_V				118
# define MLX_KEY_W				119
# define MLX_KEY_X				120
# define MLX_KEY_Y				121
# define MLX_KEY_Z				122
# define MLX_KEY_TIDLE			96
# define MLX_MOD_NONE			0
# define MLX_MOD_SHIFT			1 << 0
# define MLX_MOD_CAPS			1 << 1
# define MLX_MOD_CTRL			1 << 2
# define MLX_MOD_ALT			1 << 3

// COULEURS
# define BLACK					0x000000
# define WHITE					0xFFFFFF
# define GREY					0xA4A4A4
# define DEEPGREY				0x333333
# define LIGHTGREY				0xBBBBBB
# define RED					0xFF0000
# define ORANGE					0xFF8000
# define YELLOW					0xFFFF00
# define GREEN					0x00FF00
# define CYAN					0x00FFFF
# define BLUE					0x0000FF
# define PURPLE					0x6A0888
# define PINK					0xFF00FF
# define BROWN					0x61380B

// INCLUDES
#include "minilibx_macos/mlx.h"
#include "libft/libft.h"

// Display keycode
int		my_key_funct(int keycode, void *param);

// Draw square
int		ft_draw_square(void *mlx, void *win, int x, int y, int color);

#endif
