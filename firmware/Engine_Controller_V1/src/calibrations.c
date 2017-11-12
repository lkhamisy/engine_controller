#include "calibrations.h"

float motor_setpoint[4];
float motor_control_gain[3] = {
		500,
		0.0,
		0.0
};
const float motor_pot_slope[4] = {
		0.06591797,
		0.06591797,
		1,
		1
};
float motor_pot_offset[4] = {
		133.0,
		78.5,
		0,
		0
};
const float motor_limit_high[4] = {
		90,
		90,
		90,
		90
};
const float motor_limit_low[4] = {
		0,
		0,
		0,
		0
};
const float pot_polarity[4] = {
		1,
		-1,
		1,
		1
};






float load_cal[2][6] = {{
		// SLOPES
		0.5,
		0.5,
		0.5,
		0.5,
		1,
		1,
},{
		// OFFSETS
		0,
		0,
		0,
		0,
		0,
		0,
}};

float press_cal[2][16] = {{
		// SLOPES
		0.644531,	// 0
		0.644531,
		0.644531,
		0.644531,
		0.644531,	// 4
		0.644531,
		1.007079,
		0.644531,
		0,	// 8
		0.001611328,
		0.001611328,
		0.001611328,
		0.001611328,	// 12
		0.001611328,
		0.001611328,
		0.001611328,	// 15
},{
		// OFFSETS
		310.3,	// 0
		310.3,
		310.3,
		310.3,
		310.3,	// 4
		310.3,
		310.3,
		310.3,
		310.3,	// 8
		310.3,
		310.3,
		310.3,
		310.3,	// 12
		310.3,
		310.3,
		310.3,	// 15
}};
