import time
import struct

class ECParse:

	def __init__(self):
		self.csv_header = "Time (s),valve_states (),pressure[0] (psi),pressure[1] (psi),pressure[2] (psi),pressure[3] (psi),pressure[4] (psi),pressure[5] (psi),pressure[6] (psi),pressure[7] (psi),samplerate (Hz),motor_setpoint[0] (degrees),motor_setpoint[1] (degrees),main_cycle_time (microseconds),motor_cycle_time (microseconds),adc_cycle_time (microseconds),telemetry_cycle_time (microseconds),ebatt (Volts),ibus (Amps),telemetry_rate (Hz),motor_control_gain[0] (),motor_control_gain[1] (),motor_control_gain[2] (),motor_position[0] (),motor_position[1] (),motor_pwm[0] (),motor_pwm[1] (),count1 (),count2 (),count3 (),STATE (),ivlv[0] (Amps),ivlv[1] (Amps),ivlv[2] (Amps),ivlv[3] (Amps),ivlv[4] (Amps),ivlv[5] (Amps),ivlv[6] (Amps),ivlv[7] (Amps),evlv[0] (Volts),evlv[1] (Volts),evlv[2] (Volts),evlv[3] (Volts),evlv[4] (Volts),evlv[5] (Volts),evlv[6] (Volts),evlv[7] (Volts),LOG_TO_AUTO (),auto_states (),debug[0] (),debug[1] (),debug[2] (),debug[3] (),debug[4] (),debug[5] (),debug[6] (),debug[7] (),e3v (),e5v (),BOARD_ID (),last_packet_number (),last_command_id (),\n"
		self.valve_states = 0
		self.pressure = [0]*16
		self.samplerate = 0
		self.motor_setpoint = [0]*4
		self.main_cycle_time = 0
		self.motor_cycle_time = 0
		self.adc_cycle_time = 0
		self.telemetry_cycle_time = 0
		self.ebatt = 0
		self.ibus = 0
		self.telemetry_rate = 0
		self.motor_control_gain = [0]*4
		self.motor_position = [0]*4
		self.motor_pwm = [0]*4
		self.count1 = 0
		self.count2 = 0
		self.count3 = 0
		self.STATE = 0
		self.load = [0]*4
		self.thrust_load = 0
		self.thermocouple = [0]*4
		self.ivlv = [0]*16
		self.evlv = [0]*16
		self.LOG_TO_AUTO = 0
		self.auto_states = 0
		self.debug = [0]*8
		self.e5v = 0
		self.e3v = 0
		self.BOARD_ID = 0
		self.last_packet_number = -1
		self.last_command_id = -1
		self.log_string = ""

	def parse_packet(self, packet):
		byte_rep = packet[0:2]
		self.valve_states = int((float(struct.unpack("<H", byte_rep)[0]))/1)
		byte_rep = packet[2:4]
		self.pressure[0] = float((float(struct.unpack("<h", byte_rep)[0]))/1)
		byte_rep = packet[4:6]
		self.pressure[1] = float((float(struct.unpack("<h", byte_rep)[0]))/1)
		byte_rep = packet[6:8]
		self.pressure[2] = float((float(struct.unpack("<h", byte_rep)[0]))/1)
		byte_rep = packet[8:10]
		self.pressure[3] = float((float(struct.unpack("<h", byte_rep)[0]))/1)
		byte_rep = packet[10:12]
		self.pressure[4] = float((float(struct.unpack("<h", byte_rep)[0]))/1)
		byte_rep = packet[12:14]
		self.pressure[5] = float((float(struct.unpack("<h", byte_rep)[0]))/1)
		byte_rep = packet[14:16]
		self.pressure[6] = float((float(struct.unpack("<h", byte_rep)[0]))/1)
		byte_rep = packet[16:18]
		self.pressure[7] = float((float(struct.unpack("<h", byte_rep)[0]))/1)
		byte_rep = packet[18:22]
		self.samplerate = int((float(struct.unpack("<I", byte_rep)[0]))/1)
		byte_rep = packet[22:26]
		self.motor_setpoint[0] = float((float(struct.unpack("<i", byte_rep)[0]))/1000)
		byte_rep = packet[26:30]
		self.motor_setpoint[1] = float((float(struct.unpack("<i", byte_rep)[0]))/1000)
		byte_rep = packet[30:32]
		self.main_cycle_time = int((float(struct.unpack("<H", byte_rep)[0]))/1)
		byte_rep = packet[32:34]
		self.motor_cycle_time = int((float(struct.unpack("<H", byte_rep)[0]))/1)
		byte_rep = packet[34:36]
		self.adc_cycle_time = int((float(struct.unpack("<H", byte_rep)[0]))/1)
		byte_rep = packet[36:40]
		self.telemetry_cycle_time = int((float(struct.unpack("<I", byte_rep)[0]))/1)
		byte_rep = packet[40:42]
		self.ebatt = float((float(struct.unpack("<h", byte_rep)[0]))/1000)
		byte_rep = packet[42:44]
		self.ibus = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[44:46]
		self.telemetry_rate = int((float(struct.unpack("<H", byte_rep)[0]))/1)
		byte_rep = packet[46:48]
		self.motor_control_gain[0] = float((float(struct.unpack("<H", byte_rep)[0]))/1)
		byte_rep = packet[48:50]
		self.motor_control_gain[1] = float((float(struct.unpack("<H", byte_rep)[0]))/1)
		byte_rep = packet[50:52]
		self.motor_control_gain[2] = float((float(struct.unpack("<H", byte_rep)[0]))/1)
		byte_rep = packet[52:56]
		self.motor_position[0] = float((float(struct.unpack("<i", byte_rep)[0]))/1000)
		byte_rep = packet[56:60]
		self.motor_position[1] = float((float(struct.unpack("<i", byte_rep)[0]))/1000)
		byte_rep = packet[60:62]
		self.motor_pwm[0] = int((float(struct.unpack("<h", byte_rep)[0]))/1)
		byte_rep = packet[62:64]
		self.motor_pwm[1] = int((float(struct.unpack("<h", byte_rep)[0]))/1)
		byte_rep = packet[64:68]
		self.count1 = int((float(struct.unpack("<i", byte_rep)[0]))/1)
		byte_rep = packet[68:72]
		self.count2 = int((float(struct.unpack("<i", byte_rep)[0]))/1)
		byte_rep = packet[72:76]
		self.count3 = int((float(struct.unpack("<i", byte_rep)[0]))/1)
		byte_rep = packet[76:77]
		self.STATE = int((float(struct.unpack("<B", byte_rep)[0]))/1)
		byte_rep = packet[77:79]
		self.ivlv[0] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[79:81]
		self.ivlv[1] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[81:83]
		self.ivlv[2] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[83:85]
		self.ivlv[3] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[85:87]
		self.ivlv[4] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[87:89]
		self.ivlv[5] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[89:91]
		self.ivlv[6] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[91:93]
		self.ivlv[7] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[93:95]
		self.evlv[0] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[95:97]
		self.evlv[1] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[97:99]
		self.evlv[2] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[99:101]
		self.evlv[3] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[101:103]
		self.evlv[4] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[103:105]
		self.evlv[5] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[105:107]
		self.evlv[6] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[107:109]
		self.evlv[7] = float((float(struct.unpack("<h", byte_rep)[0]))/100)
		byte_rep = packet[109:111]
		self.LOG_TO_AUTO = int((float(struct.unpack("<h", byte_rep)[0]))/1)
		byte_rep = packet[111:113]
		self.auto_states = int((float(struct.unpack("<H", byte_rep)[0]))/1)
		byte_rep = packet[113:117]
		self.debug[0] = int((float(struct.unpack("<i", byte_rep)[0]))/1)
		byte_rep = packet[117:121]
		self.debug[1] = int((float(struct.unpack("<i", byte_rep)[0]))/1)
		byte_rep = packet[121:125]
		self.debug[2] = int((float(struct.unpack("<i", byte_rep)[0]))/1)
		byte_rep = packet[125:129]
		self.debug[3] = int((float(struct.unpack("<i", byte_rep)[0]))/1)
		byte_rep = packet[129:133]
		self.debug[4] = int((float(struct.unpack("<i", byte_rep)[0]))/1)
		byte_rep = packet[133:137]
		self.debug[5] = int((float(struct.unpack("<i", byte_rep)[0]))/1)
		byte_rep = packet[137:141]
		self.debug[6] = int((float(struct.unpack("<i", byte_rep)[0]))/1)
		byte_rep = packet[141:145]
		self.debug[7] = int((float(struct.unpack("<i", byte_rep)[0]))/1)
		byte_rep = packet[145:149]
		self.e3v = float((float(struct.unpack("<i", byte_rep)[0]))/100)
		byte_rep = packet[149:153]
		self.e5v = float((float(struct.unpack("<i", byte_rep)[0]))/100)
		byte_rep = packet[153:155]
		self.BOARD_ID = int((float(struct.unpack("<H", byte_rep)[0]))/1)
		byte_rep = packet[155:157]
		self.last_packet_number = int((float(struct.unpack("<H", byte_rep)[0]))/1)
		byte_rep = packet[157:159]
		self.last_command_id = int((float(struct.unpack("<H", byte_rep)[0]))/1)
		self.log_string = str(time.clock())+','+str(self.valve_states)+','+str(self.pressure[0])+','+str(self.pressure[1])+','+str(self.pressure[2])+','+str(self.pressure[3])+','+str(self.pressure[4])+','+str(self.pressure[5])+','+str(self.pressure[6])+','+str(self.pressure[7])+','+str(self.samplerate)+','+str(self.motor_setpoint[0])+','+str(self.motor_setpoint[1])+','+str(self.main_cycle_time)+','+str(self.motor_cycle_time)+','+str(self.adc_cycle_time)+','+str(self.telemetry_cycle_time)+','+str(self.ebatt)+','+str(self.ibus)+','+str(self.telemetry_rate)+','+str(self.motor_control_gain[0])+','+str(self.motor_control_gain[1])+','+str(self.motor_control_gain[2])+','+str(self.motor_position[0])+','+str(self.motor_position[1])+','+str(self.motor_pwm[0])+','+str(self.motor_pwm[1])+','+str(self.count1)+','+str(self.count2)+','+str(self.count3)+','+str(self.STATE)+','+str(self.ivlv[0])+','+str(self.ivlv[1])+','+str(self.ivlv[2])+','+str(self.ivlv[3])+','+str(self.ivlv[4])+','+str(self.ivlv[5])+','+str(self.ivlv[6])+','+str(self.ivlv[7])+','+str(self.evlv[0])+','+str(self.evlv[1])+','+str(self.evlv[2])+','+str(self.evlv[3])+','+str(self.evlv[4])+','+str(self.evlv[5])+','+str(self.evlv[6])+','+str(self.evlv[7])+','+str(self.LOG_TO_AUTO)+','+str(self.auto_states)+','+str(self.debug[0])+','+str(self.debug[1])+','+str(self.debug[2])+','+str(self.debug[3])+','+str(self.debug[4])+','+str(self.debug[5])+','+str(self.debug[6])+','+str(self.debug[7])+','+str(self.e3v)+','+str(self.e5v)+','+str(self.BOARD_ID)+','+str(self.last_packet_number)+','+str(self.last_command_id)+','