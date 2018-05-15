/// pack_telem_defines.h
/// Last autogenerated: Tue May 15 08:01:54 2018

#include "globals.h"
#include "calibrations.h"
#include "config.h"

#define	TELEM_ITEM_0	((uint16_t) (valve_states*1)) >> 0 
#define	TELEM_ITEM_1	((uint16_t) (valve_states*1)) >> 8 
#define	TELEM_ITEM_2	((int16_t) (pressure[0]*1)) >> 0 
#define	TELEM_ITEM_3	((int16_t) (pressure[0]*1)) >> 8 
#define	TELEM_ITEM_4	((int16_t) (pressure[1]*1)) >> 0 
#define	TELEM_ITEM_5	((int16_t) (pressure[1]*1)) >> 8 
#define	TELEM_ITEM_6	((int16_t) (pressure[2]*1)) >> 0 
#define	TELEM_ITEM_7	((int16_t) (pressure[2]*1)) >> 8 
#define	TELEM_ITEM_8	((int16_t) (pressure[3]*1)) >> 0 
#define	TELEM_ITEM_9	((int16_t) (pressure[3]*1)) >> 8 
#define	TELEM_ITEM_10	((int16_t) (pressure[4]*1)) >> 0 
#define	TELEM_ITEM_11	((int16_t) (pressure[4]*1)) >> 8 
#define	TELEM_ITEM_12	((int16_t) (pressure[5]*1)) >> 0 
#define	TELEM_ITEM_13	((int16_t) (pressure[5]*1)) >> 8 
#define	TELEM_ITEM_14	((int16_t) (pressure[6]*1)) >> 0 
#define	TELEM_ITEM_15	((int16_t) (pressure[6]*1)) >> 8 
#define	TELEM_ITEM_16	((int16_t) (pressure[7]*1)) >> 0 
#define	TELEM_ITEM_17	((int16_t) (pressure[7]*1)) >> 8 
#define	TELEM_ITEM_18	((uint32_t) (samplerate*1)) >> 0 
#define	TELEM_ITEM_19	((uint32_t) (samplerate*1)) >> 8 
#define	TELEM_ITEM_20	((uint32_t) (samplerate*1)) >> 16 
#define	TELEM_ITEM_21	((uint32_t) (samplerate*1)) >> 24 
#define	TELEM_ITEM_22	((int32_t) (motor_setpoint[0]*1000)) >> 0 
#define	TELEM_ITEM_23	((int32_t) (motor_setpoint[0]*1000)) >> 8 
#define	TELEM_ITEM_24	((int32_t) (motor_setpoint[0]*1000)) >> 16 
#define	TELEM_ITEM_25	((int32_t) (motor_setpoint[0]*1000)) >> 24 
#define	TELEM_ITEM_26	((int32_t) (motor_setpoint[1]*1000)) >> 0 
#define	TELEM_ITEM_27	((int32_t) (motor_setpoint[1]*1000)) >> 8 
#define	TELEM_ITEM_28	((int32_t) (motor_setpoint[1]*1000)) >> 16 
#define	TELEM_ITEM_29	((int32_t) (motor_setpoint[1]*1000)) >> 24 
#define	TELEM_ITEM_30	((uint16_t) (main_cycle_time[0]*1)) >> 0 
#define	TELEM_ITEM_31	((uint16_t) (main_cycle_time[0]*1)) >> 8 
#define	TELEM_ITEM_32	((uint16_t) (motor_cycle_time[0]*1)) >> 0 
#define	TELEM_ITEM_33	((uint16_t) (motor_cycle_time[0]*1)) >> 8 
#define	TELEM_ITEM_34	((uint16_t) (adc_cycle_time[0]*1)) >> 0 
#define	TELEM_ITEM_35	((uint16_t) (adc_cycle_time[0]*1)) >> 8 
#define	TELEM_ITEM_36	((uint32_t) (telemetry_cycle_time[0]*1)) >> 0 
#define	TELEM_ITEM_37	((uint32_t) (telemetry_cycle_time[0]*1)) >> 8 
#define	TELEM_ITEM_38	((uint32_t) (telemetry_cycle_time[0]*1)) >> 16 
#define	TELEM_ITEM_39	((uint32_t) (telemetry_cycle_time[0]*1)) >> 24 
#define	TELEM_ITEM_40	((int16_t) (ebatt*1000)) >> 0 
#define	TELEM_ITEM_41	((int16_t) (ebatt*1000)) >> 8 
#define	TELEM_ITEM_42	((int16_t) (ibus*100)) >> 0 
#define	TELEM_ITEM_43	((int16_t) (ibus*100)) >> 8 
#define	TELEM_ITEM_44	((uint16_t) (telemetry_rate[0]*1)) >> 0 
#define	TELEM_ITEM_45	((uint16_t) (telemetry_rate[0]*1)) >> 8 
#define	TELEM_ITEM_46	((uint16_t) (motor_control_gain[0]*1)) >> 0 
#define	TELEM_ITEM_47	((uint16_t) (motor_control_gain[0]*1)) >> 8 
#define	TELEM_ITEM_48	((uint16_t) (motor_control_gain[1]*1)) >> 0 
#define	TELEM_ITEM_49	((uint16_t) (motor_control_gain[1]*1)) >> 8 
#define	TELEM_ITEM_50	((uint16_t) (motor_control_gain[2]*1)) >> 0 
#define	TELEM_ITEM_51	((uint16_t) (motor_control_gain[2]*1)) >> 8 
#define	TELEM_ITEM_52	((int32_t) (motor_position[0]*1000)) >> 0 
#define	TELEM_ITEM_53	((int32_t) (motor_position[0]*1000)) >> 8 
#define	TELEM_ITEM_54	((int32_t) (motor_position[0]*1000)) >> 16 
#define	TELEM_ITEM_55	((int32_t) (motor_position[0]*1000)) >> 24 
#define	TELEM_ITEM_56	((int32_t) (motor_position[1]*1000)) >> 0 
#define	TELEM_ITEM_57	((int32_t) (motor_position[1]*1000)) >> 8 
#define	TELEM_ITEM_58	((int32_t) (motor_position[1]*1000)) >> 16 
#define	TELEM_ITEM_59	((int32_t) (motor_position[1]*1000)) >> 24 
#define	TELEM_ITEM_60	((int16_t) (motor_pwm[0]*1)) >> 0 
#define	TELEM_ITEM_61	((int16_t) (motor_pwm[0]*1)) >> 8 
#define	TELEM_ITEM_62	((int16_t) (motor_pwm[1]*1)) >> 0 
#define	TELEM_ITEM_63	((int16_t) (motor_pwm[1]*1)) >> 8 
#define	TELEM_ITEM_64	((int32_t) (count1*1)) >> 0 
#define	TELEM_ITEM_65	((int32_t) (count1*1)) >> 8 
#define	TELEM_ITEM_66	((int32_t) (count1*1)) >> 16 
#define	TELEM_ITEM_67	((int32_t) (count1*1)) >> 24 
#define	TELEM_ITEM_68	((int32_t) (count2*1)) >> 0 
#define	TELEM_ITEM_69	((int32_t) (count2*1)) >> 8 
#define	TELEM_ITEM_70	((int32_t) (count2*1)) >> 16 
#define	TELEM_ITEM_71	((int32_t) (count2*1)) >> 24 
#define	TELEM_ITEM_72	((int32_t) (count3*1)) >> 0 
#define	TELEM_ITEM_73	((int32_t) (count3*1)) >> 8 
#define	TELEM_ITEM_74	((int32_t) (count3*1)) >> 16 
#define	TELEM_ITEM_75	((int32_t) (count3*1)) >> 24 
#define	TELEM_ITEM_76	((uint8_t) (STATE*1)) >> 0 
#define	TELEM_ITEM_77	((int16_t) (ivlv[0]*100)) >> 0 
#define	TELEM_ITEM_78	((int16_t) (ivlv[0]*100)) >> 8 
#define	TELEM_ITEM_79	((int16_t) (ivlv[1]*100)) >> 0 
#define	TELEM_ITEM_80	((int16_t) (ivlv[1]*100)) >> 8 
#define	TELEM_ITEM_81	((int16_t) (ivlv[2]*100)) >> 0 
#define	TELEM_ITEM_82	((int16_t) (ivlv[2]*100)) >> 8 
#define	TELEM_ITEM_83	((int16_t) (ivlv[3]*100)) >> 0 
#define	TELEM_ITEM_84	((int16_t) (ivlv[3]*100)) >> 8 
#define	TELEM_ITEM_85	((int16_t) (ivlv[4]*100)) >> 0 
#define	TELEM_ITEM_86	((int16_t) (ivlv[4]*100)) >> 8 
#define	TELEM_ITEM_87	((int16_t) (ivlv[5]*100)) >> 0 
#define	TELEM_ITEM_88	((int16_t) (ivlv[5]*100)) >> 8 
#define	TELEM_ITEM_89	((int16_t) (ivlv[6]*100)) >> 0 
#define	TELEM_ITEM_90	((int16_t) (ivlv[6]*100)) >> 8 
#define	TELEM_ITEM_91	((int16_t) (ivlv[7]*100)) >> 0 
#define	TELEM_ITEM_92	((int16_t) (ivlv[7]*100)) >> 8 
#define	TELEM_ITEM_93	((int16_t) (evlv[0]*100)) >> 0 
#define	TELEM_ITEM_94	((int16_t) (evlv[0]*100)) >> 8 
#define	TELEM_ITEM_95	((int16_t) (evlv[1]*100)) >> 0 
#define	TELEM_ITEM_96	((int16_t) (evlv[1]*100)) >> 8 
#define	TELEM_ITEM_97	((int16_t) (evlv[2]*100)) >> 0 
#define	TELEM_ITEM_98	((int16_t) (evlv[2]*100)) >> 8 
#define	TELEM_ITEM_99	((int16_t) (evlv[3]*100)) >> 0 
#define	TELEM_ITEM_100	((int16_t) (evlv[3]*100)) >> 8 
#define	TELEM_ITEM_101	((int16_t) (evlv[4]*100)) >> 0 
#define	TELEM_ITEM_102	((int16_t) (evlv[4]*100)) >> 8 
#define	TELEM_ITEM_103	((int16_t) (evlv[5]*100)) >> 0 
#define	TELEM_ITEM_104	((int16_t) (evlv[5]*100)) >> 8 
#define	TELEM_ITEM_105	((int16_t) (evlv[6]*100)) >> 0 
#define	TELEM_ITEM_106	((int16_t) (evlv[6]*100)) >> 8 
#define	TELEM_ITEM_107	((int16_t) (evlv[7]*100)) >> 0 
#define	TELEM_ITEM_108	((int16_t) (evlv[7]*100)) >> 8 
#define	TELEM_ITEM_109	((int16_t) (LOG_TO_AUTO*1)) >> 0 
#define	TELEM_ITEM_110	((int16_t) (LOG_TO_AUTO*1)) >> 8 
#define	TELEM_ITEM_111	((uint16_t) (auto_states*1)) >> 0 
#define	TELEM_ITEM_112	((uint16_t) (auto_states*1)) >> 8 
#define	TELEM_ITEM_113	((int32_t) (debug[0]*1)) >> 0 
#define	TELEM_ITEM_114	((int32_t) (debug[0]*1)) >> 8 
#define	TELEM_ITEM_115	((int32_t) (debug[0]*1)) >> 16 
#define	TELEM_ITEM_116	((int32_t) (debug[0]*1)) >> 24 
#define	TELEM_ITEM_117	((int32_t) (debug[1]*1)) >> 0 
#define	TELEM_ITEM_118	((int32_t) (debug[1]*1)) >> 8 
#define	TELEM_ITEM_119	((int32_t) (debug[1]*1)) >> 16 
#define	TELEM_ITEM_120	((int32_t) (debug[1]*1)) >> 24 
#define	TELEM_ITEM_121	((int32_t) (debug[2]*1)) >> 0 
#define	TELEM_ITEM_122	((int32_t) (debug[2]*1)) >> 8 
#define	TELEM_ITEM_123	((int32_t) (debug[2]*1)) >> 16 
#define	TELEM_ITEM_124	((int32_t) (debug[2]*1)) >> 24 
#define	TELEM_ITEM_125	((int32_t) (debug[3]*1)) >> 0 
#define	TELEM_ITEM_126	((int32_t) (debug[3]*1)) >> 8 
#define	TELEM_ITEM_127	((int32_t) (debug[3]*1)) >> 16 
#define	TELEM_ITEM_128	((int32_t) (debug[3]*1)) >> 24 
#define	TELEM_ITEM_129	((int32_t) (debug[4]*1)) >> 0 
#define	TELEM_ITEM_130	((int32_t) (debug[4]*1)) >> 8 
#define	TELEM_ITEM_131	((int32_t) (debug[4]*1)) >> 16 
#define	TELEM_ITEM_132	((int32_t) (debug[4]*1)) >> 24 
#define	TELEM_ITEM_133	((int32_t) (debug[5]*1)) >> 0 
#define	TELEM_ITEM_134	((int32_t) (debug[5]*1)) >> 8 
#define	TELEM_ITEM_135	((int32_t) (debug[5]*1)) >> 16 
#define	TELEM_ITEM_136	((int32_t) (debug[5]*1)) >> 24 
#define	TELEM_ITEM_137	((int32_t) (debug[6]*1)) >> 0 
#define	TELEM_ITEM_138	((int32_t) (debug[6]*1)) >> 8 
#define	TELEM_ITEM_139	((int32_t) (debug[6]*1)) >> 16 
#define	TELEM_ITEM_140	((int32_t) (debug[6]*1)) >> 24 
#define	TELEM_ITEM_141	((int32_t) (debug[7]*1)) >> 0 
#define	TELEM_ITEM_142	((int32_t) (debug[7]*1)) >> 8 
#define	TELEM_ITEM_143	((int32_t) (debug[7]*1)) >> 16 
#define	TELEM_ITEM_144	((int32_t) (debug[7]*1)) >> 24 
#define	TELEM_ITEM_145	((int32_t) (e3v*100)) >> 0 
#define	TELEM_ITEM_146	((int32_t) (e3v*100)) >> 8 
#define	TELEM_ITEM_147	((int32_t) (e3v*100)) >> 16 
#define	TELEM_ITEM_148	((int32_t) (e3v*100)) >> 24 
#define	TELEM_ITEM_149	((int32_t) (e5v*100)) >> 0 
#define	TELEM_ITEM_150	((int32_t) (e5v*100)) >> 8 
#define	TELEM_ITEM_151	((int32_t) (e5v*100)) >> 16 
#define	TELEM_ITEM_152	((int32_t) (e5v*100)) >> 24 
#define	TELEM_ITEM_153	((uint16_t) (BOARD_ID*1)) >> 0 
#define	TELEM_ITEM_154	((uint16_t) (BOARD_ID*1)) >> 8 
#define	TELEM_ITEM_155	0
#define	TELEM_ITEM_156	0
#define	TELEM_ITEM_157	0
#define	TELEM_ITEM_158	0
#define	TELEM_ITEM_159	0
#define	TELEM_ITEM_160	0
#define	TELEM_ITEM_161	0
#define	TELEM_ITEM_162	0
#define	TELEM_ITEM_163	0
#define	TELEM_ITEM_164	0
#define	TELEM_ITEM_165	0
#define	TELEM_ITEM_166	0
#define	TELEM_ITEM_167	0
#define	TELEM_ITEM_168	0
#define	TELEM_ITEM_169	0
#define	TELEM_ITEM_170	0
#define	TELEM_ITEM_171	0
#define	TELEM_ITEM_172	0
#define	TELEM_ITEM_173	0
#define	TELEM_ITEM_174	0
#define	TELEM_ITEM_175	0
#define	TELEM_ITEM_176	0
#define	TELEM_ITEM_177	0
#define	TELEM_ITEM_178	0
#define	TELEM_ITEM_179	0
#define	TELEM_ITEM_180	0
#define	TELEM_ITEM_181	0
#define	TELEM_ITEM_182	0
#define	TELEM_ITEM_183	0
#define	TELEM_ITEM_184	0
#define	TELEM_ITEM_185	0
#define	TELEM_ITEM_186	0
#define	TELEM_ITEM_187	0
#define	TELEM_ITEM_188	0
#define	TELEM_ITEM_189	0
#define	TELEM_ITEM_190	0
#define	TELEM_ITEM_191	0
#define	TELEM_ITEM_192	0
#define	TELEM_ITEM_193	0
#define	TELEM_ITEM_194	0
#define	TELEM_ITEM_195	0
#define	TELEM_ITEM_196	0
#define	TELEM_ITEM_197	0
#define	TELEM_ITEM_198	0
#define	TELEM_ITEM_199	0
#define	TELEM_ITEM_200	0
#define	TELEM_ITEM_201	0
#define	TELEM_ITEM_202	0
#define	TELEM_ITEM_203	0
#define	TELEM_ITEM_204	0
#define	TELEM_ITEM_205	0
#define	TELEM_ITEM_206	0
#define	TELEM_ITEM_207	0
#define	TELEM_ITEM_208	0
#define	TELEM_ITEM_209	0
#define	TELEM_ITEM_210	0
#define	TELEM_ITEM_211	0
#define	TELEM_ITEM_212	0
#define	TELEM_ITEM_213	0
#define	TELEM_ITEM_214	0
#define	TELEM_ITEM_215	0
#define	TELEM_ITEM_216	0
#define	TELEM_ITEM_217	0
#define	TELEM_ITEM_218	0
#define	TELEM_ITEM_219	0
#define	TELEM_ITEM_220	0
#define	TELEM_ITEM_221	0
#define	TELEM_ITEM_222	0
#define	TELEM_ITEM_223	0
#define	TELEM_ITEM_224	0
#define	TELEM_ITEM_225	0
#define	TELEM_ITEM_226	0
#define	TELEM_ITEM_227	0
#define	TELEM_ITEM_228	0
#define	TELEM_ITEM_229	0
#define	TELEM_ITEM_230	0
#define	TELEM_ITEM_231	0
#define	TELEM_ITEM_232	0
#define	TELEM_ITEM_233	0
#define	TELEM_ITEM_234	0
#define	TELEM_ITEM_235	0
#define	TELEM_ITEM_236	0
#define	TELEM_ITEM_237	0
#define	TELEM_ITEM_238	0
#define	TELEM_ITEM_239	0
#define	TELEM_ITEM_240	0
#define	TELEM_ITEM_241	0
#define	TELEM_ITEM_242	0
#define	TELEM_ITEM_243	0
#define	TELEM_ITEM_244	0
#define	TELEM_ITEM_245	0
#define	TELEM_ITEM_246	0
#define	TELEM_ITEM_247	0
#define	TELEM_ITEM_248	0
#define	TELEM_ITEM_249	0
#define	TELEM_ITEM_250	0
#define	TELEM_ITEM_251	0
#define	TELEM_ITEM_252	0
#define	TELEM_ITEM_253	0
#define	PACKET_SIZE	155
