#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1

#define SK_DEVICES 1		
		

#define SK_HWCCOUNT 32	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 2268 1064\" width=\"100%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"2108\" height=\"1030\" x=80 y=17 style=\"fill:url(#grad1);\" /><rect width=\"2108\" height=\"10\" x=80 y=85 style=\"fill:rgb(0,0,100);\" /><rect width=\"2108\" height=\"10\" x=80 y=979 style=\"fill:rgb(0,0,100);\" /><rect width=\"90\" height=\"1064\" x=0 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /><rect width=\"90\" height=\"1064\" x=2178 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 17845, GZIP size: 5747 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0x6D, 0x73, 0x9B, 0x48, 0x93, 0xDF, 0xEF, 0x57, 
	0x10, 0x52, 0x6B, 0x8B, 0x13, 0x92, 0x79, 0xD5, 0xAB, 0x65, 
	0x9F, 0xED, 0x24, 0x1B, 0xD7, 0xC6, 0x1B, 0x57, 0x94, 0x4D, 
	0xF6, 0x4E, 0xA5, 0x4A, 0x21, 0x18, 0x49, 0xD8, 0x08, 0x74, 
	0x80, 0xEC, 0xF8, 0x1C, 0xFF, 0xF7, 0xEB, 0xEE, 0x19, 0x10, 
	0x20, 0xC9, 0x91, 0x37, 0xCF, 0x93, 0xAD, 0xD5, 0x30, 0x3D, 
	0xD3, 0xEF, 0x3D, 0x4D, 0xCF, 0x0C, 0xBE, 0x73, 0x62, 0xE9, 
	0xFD, 0x57, 0x77, 0x30, 0x1A, 0xE9, 0xAA, 0xA9, 0x69, 0x6A, 
	0x47, 0x6F, 0xA9, 0xB2, 0x2E, 0xAB, 0xC6, 0x58, 0x05, 0x88, 
	0x65, 0x1B, 0x4D, 0x8B, 0xC3, 0x8C, 0x0C, 0xD6, 0xD2, 0xAC, 
	0x66, 0x87, 0xC3, 0xCC, 0x0C, 0xD6, 0xB6, 0xDB, 0x4D, 0x83, 
	0xC3, 0xAC, 0x0C, 0xD6, 0xD5, 0xBA, 0xCD, 0x16, 0x87, 0xD9, 
	0x19, 0x4C, 0xD7, 0x5A, 0x62, 0x5A, 0x2B, 0x07, 0x19, 0xBA, 
	0x95, 0xF1, 0x68, 0xE7, 0x40, 0xB3, 0xD5, 0xCA, 0x98, 0x74, 
	0x72, 0xA0, 0xAD, 0x77, 0x33, 0x2E, 0xDD, 0x1C, 0xD8, 0x6A, 
	0xEB, 0x19, 0x1B, 0x5D, 0xCB, 0xA0, 0xA8, 0x49, 0x4B, 0xD3, 
	0x37, 0x34, 0x21, 0x58, 0x45, 0x13, 0x82, 0x55, 0x34, 0x21, 
	0x58, 0x45, 0x13, 0x82, 0x95, 0x35, 0x21, 0x50, 0x55, 0x13, 
	0x02, 0x56, 0x35, 0x21, 0x60, 0x55, 0x13, 0x02, 0x56, 0x35, 
	0xE1, 0x62, 0xE7, 0x9A, 0xE8, 0xDD, 0x76, 0x2B, 0x33, 0xCF, 
	0xC5, 0x5F, 0x9F, 0x2B, 0x60, 0x9A, 0x7C, 0xF6, 0xD7, 0xE7, 
	0x8F, 0x19, 0xBC, 0x63, 0x9A, 0x00, 0x36, 0xCC, 0x2E, 0x80, 
	0x73, 0xF1, 0x3B, 0x36, 0x48, 0x40, 0xB0, 0xF3, 0xF2, 0x3C, 
	0xB3, 0x0B, 0xE8, 0x17, 0xE5, 0x79, 0x04, 0x7B, 0x53, 0xD1, 
	0x89, 0x90, 0x87, 0xEF, 0x2F, 0xDF, 0x09, 0x01, 0x2C, 0x90, 
	0xB6, 0x65, 0xAA, 0xA6, 0x6D, 0x03, 0x38, 0xF0, 0x3D, 0x16, 
	0x03, 0x1C, 0x07, 0x0C, 0xD5, 0x32, 0x6D, 0xD5, 0x68, 0x6B, 
	0x00, 0x5F, 0x38, 0x71, 0x7A, 0xC5, 0xC2, 0x95, 0xAC, 0xDA, 
	0x1A, 0x0C, 0x99, 0x28, 0xB5, 0xA9, 0xA9, 0x86, 0x06, 0x48, 
	0x6F, 0xFC, 0x64, 0x19, 0x38, 0x0F, 0x32, 0x78, 0x4A, 0x0C, 
	0x75, 0x3A, 0xD9, 0x10, 0xF8, 0xAC, 0x9D, 0x23, 0xE4, 0x50, 
	0x83, 0xA0, 0xE3, 0xFE, 0x7F, 0xDC, 0x41, 0xC4, 0x7A, 0xEC, 
	0xEE, 0x43, 0x92, 0x52, 0xD0, 0xCA, 0x67, 0x9F, 0xDF, 0x5E, 
	0xC9, 0xAA, 0x8E, 0xE2, 0xA2, 0x34, 0x0F, 0x49, 0xCA, 0x16, 
	0x72, 0x61, 0xE2, 0xBB, 0x55, 0x88, 0xE1, 0x3D, 0xD2, 0x61, 
	0xEE, 0x75, 0x1C, 0xCD, 0x62, 0x67, 0x21, 0x0D, 0x63, 0x57, 
	0x56, 0x1B, 0xBA, 0xDA, 0x30, 0xD4, 0x91, 0x2C, 0xAB, 0xF2, 
	0xFB, 0x28, 0xF0, 0xA4, 0x37, 0xD1, 0x7D, 0x08, 0xCF, 0x9F, 
	0xA3, 0xD9, 0x2C, 0x60, 0xF0, 0x70, 0xF1, 0xE0, 0x42, 0x3B, 
	0x46, 0xC2, 0x84, 0xCA, 0xEE, 0x7C, 0x76, 0xBF, 0x81, 0x5A, 
	0x9D, 0x75, 0x77, 0x74, 0x1D, 0xCF, 0x7E, 0x32, 0xEB, 0xEC, 
	0xAF, 0xBF, 0xA5, 0x8F, 0xAB, 0x74, 0xB9, 0x4A, 0xC5, 0x44, 
	0xF3, 0x79, 0x49, 0x08, 0xF8, 0x7B, 0x1C, 0xAD, 0x96, 0xD2, 
	0x59, 0xB9, 0x7B, 0xBE, 0x41, 0xFB, 0xAF, 0x65, 0x92, 0xC6, 
	0x0C, 0x74, 0xFC, 0x83, 0x3D, 0xA0, 0x5B, 0x50, 0x08, 0x4B, 
	0x6D, 0xD8, 0x5B, 0x87, 0xA5, 0x77, 0x7E, 0x10, 0xE4, 0x73, 
	0x8C, 0xED, 0x73, 0xE0, 0x77, 0x63, 0x0A, 0x4A, 0x58, 0xE1, 
	0xD3, 0x5A, 0x33, 0xA9, 0x8E, 0x66, 0x6C, 0x5A, 0xBB, 0x09, 
	0x08, 0x2E, 0x85, 0x19, 0x57, 0xD7, 0xD2, 0x30, 0xE5, 0x78, 
	0x6D, 0x5A, 0xD3, 0x38, 0xB0, 0x8F, 0xB3, 0x8C, 0x8E, 0x2A, 
	0xD7, 0x32, 0x6C, 0x89, 0x06, 0x94, 0x35, 0x11, 0x08, 0x91, 
	0x14, 0x02, 0x53, 0x1E, 0x67, 0xDD, 0xB7, 0xA1, 0x87, 0x1D, 
	0x0D, 0x62, 0x1D, 0xA2, 0xF6, 0x6C, 0x95, 0x46, 0xD2, 0x65, 
	0x98, 0xB2, 0xF8, 0xCE, 0x09, 0x64, 0xC1, 0xF1, 0x93, 0x13, 
	0x7A, 0xD1, 0x82, 0x7A, 0x39, 0xC3, 0x8F, 0xC8, 0xFE, 0xE3, 
	0x74, 0x5A, 0x12, 0xA8, 0xC4, 0xFF, 0x22, 0xF0, 0x97, 0x9C, 
	0xB1, 0x51, 0x02, 0x47, 0x61, 0x1A, 0x47, 0x01, 0x1F, 0x69, 
	0x74, 0x84, 0xB6, 0x17, 0xAB, 0x14, 0x8D, 0x9C, 0x05, 0x08, 
	0x48, 0x51, 0xE8, 0xBE, 0xFB, 0x7C, 0x5E, 0xE8, 0x7D, 0x8E, 
	0x9D, 0x30, 0xF1, 0x53, 0x3F, 0x0A, 0x41, 0xC5, 0x07, 0x14, 
	0x06, 0x9D, 0xD3, 0x25, 0x1E, 0xA5, 0xD1, 0xEB, 0x28, 0x29, 
	0xA0, 0x5D, 0xC3, 0x7A, 0x93, 0xAE, 0x1C, 0x37, 0x06, 0xCA, 
	0x94, 0xC0, 0x50, 0x9D, 0x6B, 0x5A, 0x84, 0x60, 0x92, 0x68, 
	0xB9, 0x11, 0x70, 0xC2, 0xC4, 0xC2, 0xB2, 0xDC, 0x12, 0x1F, 
	0x22, 0x98, 0xB8, 0xD6, 0xF2, 0x13, 0x73, 0xA3, 0xD8, 0xE3, 
	0x54, 0x15, 0x22, 0x6B, 0x68, 0xEB, 0xD1, 0x61, 0xB4, 0x8A, 
	0x5D, 0x96, 0x7B, 0x60, 0x24, 0x5F, 0x1D, 0xBD, 0x95, 0x60, 
	0x75, 0x53, 0x0B, 0xEB, 0x99, 0xD6, 0x81, 0x2E, 0xDA, 0xAC, 
	0x6F, 0x8A, 0xD6, 0x12, 0xAD, 0x2D, 0xDA, 0x16, 0x8A, 0xD0, 
	0x28, 0xBA, 0xAF, 0xF1, 0x62, 0xE7, 0x41, 0xEF, 0x8B, 0x13, 
	0x3F, 0x48, 0xA9, 0xBF, 0xF0, 0xC3, 0x99, 0x64, 0x68, 0xBF, 
	0x55, 0x20, 0x36, 0x40, 0xF6, 0xF4, 0x32, 0x79, 0xC9, 0xF3, 
	0xC9, 0x4D, 0x1A, 0xFC, 0xAF, 0xEF, 0x15, 0x9C, 0x6D, 0x81, 
	0x25, 0x7D, 0x89, 0x82, 0xD5, 0x82, 0x5C, 0xA7, 0x15, 0xC1, 
	0xE7, 0x4E, 0xE0, 0x84, 0x6E, 0x0E, 0x37, 0xAC, 0x6C, 0xE0, 
	0x03, 0xBB, 0x63, 0x41, 0x52, 0x98, 0x5F, 0xF0, 0xF3, 0x27, 
	0x27, 0xE5, 0x41, 0x30, 0x12, 0x9C, 0xC0, 0xC2, 0xFE, 0x77, 
	0x19, 0xB3, 0x2C, 0x7A, 0xF5, 0xAB, 0xBF, 0x44, 0xD0, 0x9B, 
	0x2F, 0x6F, 0x65, 0x11, 0x4A, 0xF2, 0x9B, 0xE1, 0x1F, 0x3A, 
	0x6F, 0x0C, 0xBE, 0x10, 0x0C, 0xCC, 0xE4, 0xEF, 0x20, 0x35, 
	0xB2, 0xA4, 0xE0, 0x5E, 0x85, 0x53, 0xDD, 0x35, 0x5C, 0xC9, 
	0x13, 0xD7, 0x0E, 0x4C, 0x40, 0x14, 0xC8, 0x13, 0xFA, 0x3A, 
	0xE4, 0x37, 0x56, 0x7A, 0x3E, 0xAF, 0x25, 0xE6, 0x99, 0x40, 
	0x3B, 0x72, 0x57, 0xA4, 0x9D, 0xC9, 0xB5, 0xBB, 0x8C, 0xFD, 
	0xBC, 0x0B, 0xC3, 0x43, 0x16, 0x26, 0x51, 0x2C, 0xFD, 0xEE, 
	0xF8, 0x21, 0x41, 0x0B, 0x9A, 0x6A, 0xDE, 0x04, 0x7E, 0x5B, 
	0xF4, 0xAB, 0x1B, 0xBC, 0xE9, 0x40, 0x33, 0x16, 0x98, 0xF3, 
	0x55, 0x9A, 0xF2, 0x3C, 0x58, 0xC4, 0xD2, 0x8F, 0x6C, 0x8D, 
	0x9A, 0x16, 0x6F, 0xDA, 0x36, 0x35, 0x5D, 0xDE, 0xD3, 0x35, 
	0xD1, 0x1A, 0xA2, 0x15, 0x93, 0xF5, 0x0E, 0x6F, 0x0D, 0xD1, 
	0x37, 0x05, 0xB6, 0x2D, 0xE6, 0xB7, 0x0D, 0x3B, 0xC3, 0x17, 
	0x08, 0x96, 0x98, 0x69, 0x20, 0x44, 0x88, 0xF4, 0x75, 0xEE, 
	0xA7, 0xAC, 0xE8, 0xE9, 0xA2, 0x60, 0x40, 0x5A, 0xFB, 0x03, 
	0xDB, 0x0E, 0x6F, 0xA1, 0x92, 0xE1, 0xAD, 0x21, 0x5A, 0x4B, 
	0xB4, 0x2D, 0xDE, 0x5A, 0x62, 0xDC, 0x12, 0x78, 0x96, 0xC0, 
	0xB3, 0x05, 0xDC, 0x16, 0x78, 0xB6, 0xC0, 0xB3, 0x05, 0x5E, 
	0x4B, 0x8C, 0xB7, 0x04, 0x5E, 0x5B, 0xF4, 0xDB, 0xA2, 0xDF, 
	0xA1, 0xBE, 0x08, 0xD9, 0x0F, 0xFE, 0x94, 0xB2, 0x93, 0xB5, 
	0x76, 0xD0, 0xEF, 0xCE, 0x62, 0xE1, 0x6C, 0xC0, 0xB8, 0x7B, 
	0x0A, 0xA0, 0xF7, 0x2B, 0x56, 0xF0, 0x2A, 0xA5, 0x3E, 0x27, 
	0x49, 0x0B, 0xA0, 0xA1, 0x93, 0xAE, 0x62, 0x07, 0xC3, 0x38, 
	0xB3, 0xC4, 0x9F, 0x51, 0xBC, 0x80, 0xD5, 0x0B, 0xD1, 0xC9, 
	0x12, 0x3E, 0xC8, 0x3C, 0x1E, 0x74, 0x50, 0xBF, 0x38, 0x71, 
	0x92, 0xCD, 0xFB, 0xC9, 0x1A, 0xE5, 0x65, 0x20, 0x86, 0x8E, 
	0x1B, 0x85, 0x5E, 0x92, 0x19, 0xFF, 0x0D, 0x4B, 0x1D, 0x3F, 
	0xC8, 0x68, 0x70, 0xAC, 0x0F, 0xD1, 0x3D, 0x2E, 0x19, 0xE6, 
	0xF9, 0xAB, 0x05, 0x12, 0xF1, 0x67, 0xF3, 0x6C, 0xFA, 0xC5, 
	0xC5, 0x5F, 0xD2, 0x90, 0xA5, 0x29, 0x24, 0x87, 0x9C, 0x31, 
	0xE6, 0x14, 0xE6, 0x3A, 0xF8, 0x66, 0x02, 0xF1, 0xEF, 0x18, 
	0xE7, 0xD5, 0x42, 0xE9, 0xC2, 0xDB, 0x4C, 0xD2, 0x4F, 0x2C, 
	0x61, 0x69, 0x86, 0xC1, 0xED, 0x97, 0xD9, 0x4C, 0xD8, 0x49, 
	0x3E, 0x03, 0x0A, 0x38, 0x1B, 0x4A, 0xAB, 0x2F, 0x50, 0x42, 
	0x45, 0xD2, 0x67, 0xA0, 0x89, 0x2F, 0x41, 0x2C, 0x05, 0x44, 
	0xA5, 0x22, 0xE7, 0x85, 0x87, 0xCC, 0xAB, 0x97, 0x23, 0xEC, 
	0x66, 0x68, 0x3C, 0x35, 0x64, 0x68, 0x94, 0x19, 0xF8, 0x9A, 
	0xBB, 0x98, 0xC7, 0xD1, 0xC2, 0xC1, 0xF5, 0x96, 0x4B, 0x4F, 
	0x09, 0x78, 0x8B, 0xE8, 0xB0, 0x5A, 0xAB, 0xD2, 0x13, 0x89, 
	0xEB, 0xCB, 0x6B, 0x5A, 0xFE, 0xB6, 0xB0, 0x1B, 0x66, 0x0F, 
	0x5E, 0x04, 0x80, 0x70, 0x11, 0xCF, 0x3C, 0x48, 0x05, 0xA8, 
	0x01, 0xF9, 0x2C, 0xBD, 0x42, 0xE4, 0xFF, 0xD6, 0x80, 0x90, 
	0xFB, 0x4D, 0xFA, 0x9F, 0x08, 0x93, 0x2E, 0xD2, 0xE3, 0x75, 
	0xD9, 0x1C, 0x6C, 0xC0, 0xB3, 0x98, 0xCC, 0xF3, 0x35, 0xD8, 
	0x9D, 0x7A, 0x3F, 0x7D, 0xAB, 0x4B, 0x7F, 0x2D, 0xF3, 0xC7, 
	0x75, 0xFE, 0xB5, 0xE9, 0x4D, 0x80, 0x89, 0x0F, 0xA8, 0x75, 
	0xB3, 0xCE, 0x3F, 0x27, 0x76, 0xC5, 0x16, 0x51, 0xFC, 0x80, 
	0x46, 0xC2, 0x12, 0x8B, 0xEA, 0x2A, 0x8C, 0x41, 0xA0, 0x88, 
	0xC9, 0xEF, 0xC5, 0x54, 0x39, 0xC6, 0x35, 0x8B, 0x13, 0x1F, 
	0xE2, 0x5D, 0xAC, 0x23, 0x3E, 0x61, 0x37, 0x27, 0xD0, 0x44, 
	0x64, 0x5A, 0xFE, 0xC2, 0x12, 0xDD, 0xCF, 0xD1, 0x9E, 0x63, 
	0x67, 0xFC, 0x6D, 0x58, 0xE5, 0x4C, 0x25, 0x44, 0xE0, 0xCC, 
	0xC8, 0x54, 0x2D, 0x53, 0x74, 0x70, 0xE2, 0x10, 0x63, 0x74, 
	0x9B, 0x5E, 0x82, 0xCA, 0x65, 0x78, 0xC7, 0xF8, 0xCB, 0x96, 
	0x9C, 0xBB, 0x48, 0xC8, 0xC5, 0xA2, 0xE1, 0xAD, 0x2D, 0x5A, 
	0x1D, 0x7F, 0x8C, 0x84, 0x4B, 0x43, 0x4C, 0x18, 0xF3, 0x26, 
	0x8E, 0x7B, 0x2B, 0xE5, 0xDC, 0x0A, 0x04, 0x69, 0x96, 0xFC, 
	0xD9, 0x67, 0x12, 0xBC, 0xB1, 0xDF, 0x7F, 0xBD, 0x78, 0x0D, 
	0x15, 0xBC, 0xA6, 0x71, 0x28, 0x2F, 0xE1, 0xE1, 0x3D, 0x3E, 
	0x15, 0xBA, 0x41, 0x4A, 0x90, 0xCE, 0x5C, 0x0A, 0x38, 0xDE, 
	0xFF, 0xEA, 0xF8, 0xA9, 0x84, 0x69, 0x36, 0x91, 0x12, 0x5A, 
	0xDE, 0xB0, 0xFB, 0xB0, 0x05, 0xF6, 0xC5, 0x2A, 0x49, 0xA3, 
	0x85, 0xF4, 0x1E, 0xDE, 0xFA, 0x01, 0xE4, 0x7D, 0xA1, 0xFE, 
	0x65, 0xE8, 0x00, 0x81, 0x3B, 0x11, 0x22, 0x08, 0xC1, 0x92, 
	0x47, 0x02, 0xDC, 0x90, 0xB9, 0xBC, 0x18, 0xE4, 0x51, 0xEF, 
	0x84, 0x2C, 0x90, 0xCE, 0x63, 0x48, 0x01, 0x69, 0xC8, 0x12, 
	0x5C, 0x35, 0x85, 0x65, 0xF5, 0x01, 0xAA, 0x84, 0x34, 0x21, 
	0x79, 0x95, 0x4C, 0x60, 0x3E, 0xF2, 0xCE, 0x0F, 0x19, 0xBC, 
	0x87, 0xC3, 0x19, 0x2B, 0x8E, 0x66, 0xBB, 0x10, 0xA8, 0x46, 
	0x60, 0xBB, 0x92, 0xC0, 0x2E, 0xA4, 0x52, 0x02, 0xA1, 0x55, 
	0xCE, 0x03, 0x30, 0x12, 0xCC, 0x57, 0x0D, 0xD5, 0x54, 0x2D, 
	0xD5, 0x86, 0xB5, 0xD8, 0x56, 0x3B, 0x10, 0xD2, 0x50, 0x56, 
	0xE8, 0xB8, 0x03, 0x83, 0x3D, 0xA4, 0x0A, 0x39, 0x15, 0x82, 
	0x14, 0x36, 0x81, 0x7A, 0x1B, 0xB6, 0x4A, 0xB0, 0x2F, 0x52, 
	0xB1, 0xDE, 0xE1, 0xE9, 0x10, 0xD2, 0x6A, 0x10, 0xC5, 0x7A, 
	0xF6, 0x80, 0x85, 0xD4, 0xD5, 0xB5, 0xCE, 0x7F, 0x79, 0x59, 
	0x0D, 0x4F, 0x1C, 0x6A, 0x88, 0xFE, 0x70, 0xB5, 0x84, 0x17, 
	0x31, 0xAF, 0xCF, 0x10, 0x2F, 0x60, 0x4E, 0x48, 0x62, 0xF1, 
	0xA7, 0x97, 0xD7, 0x66, 0x40, 0xFC, 0xAD, 0x2E, 0xC1, 0xCE, 
	0x27, 0x7F, 0xBA, 0xA3, 0x27, 0x23, 0x87, 0x19, 0x19, 0xEC, 
	0x0B, 0x38, 0x4E, 0xB4, 0x86, 0x68, 0x4D, 0xD1, 0x5A, 0xA2, 
	0xB5, 0x45, 0xDB, 0x12, 0x6D, 0x5B, 0xB4, 0x1D, 0x6A, 0x0D, 
	0x81, 0x6F, 0x08, 0x7C, 0x43, 0xE0, 0x1B, 0x02, 0xDF, 0x10, 
	0xF8, 0x86, 0xC0, 0x37, 0x04, 0xBE, 0xC1, 0xF1, 0x21, 0xB4, 
	0xCE, 0x44, 0x7B, 0x2E, 0xDA, 0x0B, 0xD1, 0xD2, 0x1A, 0x7C, 
	0x79, 0x55, 0x2A, 0xF3, 0xBA, 0x06, 0x71, 0xF8, 0x93, 0x91, 
	0x3F, 0x99, 0xF9, 0x93, 0xB5, 0x47, 0x61, 0x29, 0x0A, 0x7F, 
	0x9C, 0x08, 0xA5, 0x99, 0x24, 0x4A, 0x34, 0x11, 0x27, 0xB0, 
	0x75, 0xE0, 0x4E, 0x15, 0x7D, 0x2A, 0xDD, 0xC7, 0xCF, 0xD7, 
	0x7C, 0x43, 0x4C, 0xFD, 0x58, 0xFD, 0x50, 0xFE, 0xE6, 0x95, 
	0xDE, 0x8B, 0xA3, 0xEC, 0xEF, 0x0F, 0x9F, 0x50, 0xB2, 0xB7, 
	0x43, 0x7C, 0x7B, 0x5C, 0x9C, 0x15, 0xC2, 0x8B, 0xEC, 0x0F, 
	0xEF, 0x73, 0xE2, 0x70, 0x15, 0x85, 0x7E, 0x1A, 0xC5, 0x7B, 
	0x99, 0x98, 0xB4, 0x3F, 0x7B, 0xF7, 0x05, 0x45, 0x84, 0x98, 
	0x15, 0xA6, 0x41, 0xC1, 0xCF, 0xA3, 0x14, 0x96, 0x2F, 0xBE, 
	0x94, 0x19, 0xBD, 0x33, 0x3F, 0xE1, 0x4A, 0x84, 0xF6, 0x6F, 
	0xF8, 0xFF, 0xBF, 0x49, 0x31, 0x2F, 0x9D, 0xA3, 0xD1, 0x98, 
	0x18, 0x00, 0xB4, 0xA3, 0x12, 0xD2, 0x51, 0x8E, 0x72, 0x94, 
	0x23, 0x1C, 0x89, 0xE9, 0x64, 0x2E, 0x28, 0x44, 0x29, 0xD4, 
	0xA1, 0x35, 0x44, 0x6B, 0x8A, 0xD6, 0x12, 0xAD, 0x2D, 0xDA, 
	0x96, 0x68, 0xDB, 0xA2, 0xED, 0x88, 0xB6, 0x2B, 0x5A, 0x3C, 
	0xA7, 0xD9, 0x43, 0x5D, 0x94, 0x03, 0x6D, 0xF8, 0x3B, 0xE5, 
	0xFB, 0xA2, 0xCF, 0xA0, 0xF4, 0x80, 0xD8, 0xC8, 0x24, 0xE6, 
	0xEF, 0x87, 0xC4, 0xFF, 0x3F, 0x2A, 0xB3, 0xFB, 0xFF, 0x31, 
	0x5D, 0x85, 0x94, 0xF6, 0xA4, 0xD9, 0xDB, 0xF3, 0xCB, 0x9A, 
	0xA3, 0x3C, 0xC6, 0x0C, 0x0A, 0xA2, 0x50, 0xF2, 0xA0, 0x5A, 
	0x5E, 0xB0, 0x30, 0x6D, 0xCE, 0x58, 0xFA, 0x36, 0x60, 0xF8, 
	0x78, 0xFE, 0x70, 0xE9, 0xC1, 0x8C, 0xA7, 0x1C, 0x05, 0xCA, 
	0x8F, 0xB3, 0x9A, 0xA3, 0x4E, 0x94, 0xC7, 0x69, 0x14, 0xD7, 
	0x30, 0x0B, 0xB9, 0x92, 0x1F, 0x4A, 0x13, 0xC5, 0x69, 0xE2, 
	0x50, 0x9A, 0xC6, 0xFE, 0x64, 0x95, 0xB2, 0x9A, 0xAB, 0x4E, 
	0x46, 0xEE, 0x58, 0xE9, 0x0B, 0xD2, 0x4E, 0x89, 0xC2, 0x07, 
	0x4E, 0x41, 0x8C, 0x09, 0x92, 0x8F, 0x51, 0xE8, 0x06, 0xBE, 
	0x7B, 0xDB, 0x3B, 0x24, 0xB1, 0xE4, 0x69, 0x78, 0x58, 0x9F, 
	0xD4, 0x0F, 0x65, 0xA5, 0x99, 0xC0, 0x36, 0x30, 0x08, 0x60, 
	0x03, 0x16, 0x7D, 0x81, 0x8A, 0xA5, 0xA6, 0xF4, 0x0F, 0x55, 
	0x77, 0x15, 0x43, 0xE5, 0xDE, 0x93, 0x97, 0x91, 0x8F, 0xFB, 
	0x32, 0xF9, 0xA9, 0x20, 0xE2, 0x12, 0xEA, 0xA0, 0xF4, 0xAA, 
	0xA0, 0x57, 0xC6, 0x60, 0x0A, 0x1B, 0xF7, 0x9E, 0xFC, 0xDA, 
	0xA3, 0x7F, 0xB2, 0x0A, 0xBB, 0x87, 0xE8, 0x96, 0x01, 0x80, 
	0x97, 0xD5, 0xBC, 0xDB, 0xB8, 0xA7, 0x48, 0xE8, 0xC9, 0xC6, 
	0x26, 0xCD, 0xE1, 0x6E, 0x9A, 0x2E, 0xFD, 0x2B, 0xD0, 0x6C, 
	0xB5, 0x5A, 0x9B, 0x34, 0xF5, 0x12, 0x4D, 0x37, 0x7E, 0xBB, 
	0x69, 0x87, 0xDC, 0x07, 0x2E, 0x6C, 0x6D, 0x52, 0x26, 0xDC, 
	0x00, 0x8C, 0x61, 0x62, 0x11, 0x75, 0xB8, 0x37, 0xEE, 0x9F, 
	0xC3, 0x9A, 0x3C, 0x4F, 0xD3, 0x65, 0xEF, 0xE8, 0xE8, 0xFE, 
	0xFE, 0xBE, 0x79, 0x6F, 0x36, 0xA3, 0x78, 0x46, 0x3B, 0x87, 
	0xA3, 0xE4, 0x0E, 0x92, 0x68, 0x85, 0xB4, 0x93, 0x51, 0x76, 
	0x2E, 0x6A, 0xDC, 0x11, 0x6E, 0x1A, 0x07, 0xFE, 0x62, 0x26, 
	0xD7, 0x6B, 0x93, 0xD3, 0x49, 0x4F, 0x96, 0x15, 0x05, 0x71, 
	0x92, 0xF9, 0xFD, 0xB0, 0x56, 0x44, 0x24, 0x00, 0x18, 0xA8, 
	0x8A, 0xE4, 0x9C, 0x3A, 0x84, 0xD4, 0x4C, 0xF0, 0x54, 0xA1, 
	0xE9, 0xF1, 0x23, 0xBA, 0x81, 0x2C, 0x17, 0x78, 0x5E, 0x08, 
	0x96, 0x4D, 0x67, 0xB9, 0x64, 0xA1, 0x77, 0x31, 0xF7, 0x03, 
	0xAF, 0x4C, 0x3C, 0xFD, 0xD3, 0x59, 0xBC, 0x0B, 0xBC, 0x64, 
	0x1D, 0x7B, 0x4E, 0xD3, 0x87, 0xB7, 0x6C, 0xFC, 0xFE, 0xF3, 
	0xD5, 0x07, 0x20, 0xA6, 0xDE, 0x0C, 0xB4, 0xFE, 0xCD, 0xB1, 
	0x0E, 0x3F, 0xF5, 0xBA, 0x32, 0x39, 0xB9, 0x39, 0x38, 0xA8, 
	0x11, 0x59, 0xB4, 0xB2, 0xEC, 0x87, 0x4B, 0x3C, 0x08, 0x79, 
	0xF4, 0xBD, 0x9E, 0x4C, 0xA4, 0xBE, 0xC9, 0xF5, 0x1B, 0x35, 
	0x84, 0x8D, 0x67, 0xB1, 0x4F, 0x02, 0xF6, 0x64, 0xF2, 0x56, 
	0x0F, 0x0C, 0xB4, 0xFC, 0xDE, 0x97, 0x55, 0x78, 0xC9, 0xAE, 
	0x58, 0x2F, 0xC1, 0x32, 0x30, 0x19, 0xDD, 0x8C, 0x4F, 0xF3, 
	0x27, 0x50, 0xEA, 0x09, 0x4D, 0xB1, 0x16, 0xA3, 0x3E, 0x90, 
	0x8F, 0x27, 0xF1, 0xD1, 0x89, 0x5C, 0x10, 0x3C, 0xFE, 0x30, 
	0x09, 0x0A, 0x61, 0xE3, 0x34, 0x63, 0x06, 0xEA, 0xBB, 0xAC, 
	0x26, 0xFF, 0x80, 0xF8, 0x80, 0xE9, 0xA5, 0xD9, 0xF7, 0xF1, 
	0xF0, 0x9C, 0x6B, 0xE8, 0x4F, 0x6B, 0xEE, 0x80, 0x9B, 0x32, 
	0x39, 0x9F, 0xCB, 0x75, 0xA7, 0x2E, 0x83, 0x8C, 0x13, 0x45, 
	0x7D, 0xF5, 0xFE, 0x2B, 0x98, 0x70, 0xE4, 0x8C, 0x95, 0xC7, 
	0xED, 0x13, 0xDC, 0xB2, 0x5D, 0x5C, 0x61, 0x77, 0xD2, 0x6A, 
	0x70, 0xE5, 0xA4, 0xF3, 0xE6, 0x34, 0x88, 0xC0, 0x7E, 0x3A, 
	0x06, 0x00, 0x29, 0xD3, 0x0C, 0x58, 0x38, 0x4B, 0xE7, 0x0D, 
	0x5D, 0xA9, 0xCB, 0xBF, 0xC9, 0x7D, 0x3A, 0xE0, 0x1C, 0x90, 
	0xDD, 0xE6, 0x96, 0xAC, 0xF4, 0x4B, 0x93, 0x4E, 0x74, 0x30, 
	0xAC, 0x57, 0x60, 0x51, 0x1E, 0xD5, 0x32, 0xFB, 0x4C, 0xC6, 
	0xEB, 0xA7, 0x9E, 0x36, 0x18, 0x4C, 0x4E, 0xB3, 0x1D, 0x58, 
	0x8F, 0xD7, 0xD4, 0x12, 0x08, 0x8B, 0x71, 0xA1, 0x82, 0x97, 
	0x5C, 0xD5, 0xA3, 0xD6, 0x2B, 0x7B, 0x2B, 0x4B, 0x08, 0xB2, 
	0x17, 0x80, 0x59, 0x48, 0x45, 0x15, 0xB0, 0xEA, 0x20, 0x93, 
	0xAC, 0xA6, 0x0F, 0x4B, 0xF0, 0x15, 0xE4, 0x9A, 0x14, 0x37, 
	0x0C, 0xDC, 0x4B, 0x72, 0x03, 0xE0, 0x7E, 0x8A, 0x4E, 0x7C, 
	0xC3, 0x02, 0x86, 0x55, 0xBC, 0x1B, 0x38, 0x49, 0xD2, 0x93, 
	0x99, 0x97, 0x72, 0x6F, 0xED, 0x66, 0xE2, 0x2E, 0x1F, 0xF6, 
	0xE4, 0x72, 0x71, 0x9D, 0xB3, 0xB9, 0x88, 0x96, 0x0F, 0x2F, 
	0x61, 0xE2, 0x87, 0xC9, 0x9E, 0x4C, 0x2E, 0xFF, 0x1C, 0xE6, 
	0x5C, 0x2E, 0xC3, 0x04, 0xCB, 0xDB, 0x8C, 0x0F, 0x10, 0x91, 
	0x04, 0xAF, 0xA7, 0x2C, 0x0B, 0xB3, 0x81, 0xA6, 0x4E, 0x61, 
	0x09, 0x4C, 0x8F, 0x87, 0x7F, 0x7C, 0xBB, 0x3A, 0xFB, 0xFB, 
	0xEC, 0xE2, 0xF3, 0xE5, 0xC7, 0x3F, 0x87, 0xFD, 0x29, 0xAC, 
	0x06, 0x88, 0x25, 0x32, 0x32, 0x89, 0x94, 0x2C, 0x9D, 0x50, 
	0xAC, 0x84, 0x69, 0xE8, 0x92, 0x24, 0x0D, 0x92, 0x04, 0x7E, 
	0xA7, 0x42, 0xFA, 0xCD, 0xA9, 0x78, 0xF0, 0xB5, 0x39, 0x15, 
	0xFC, 0x3A, 0x3D, 0x38, 0x40, 0xEF, 0xFE, 0xF8, 0xF1, 0xFE, 
	0xEB, 0x1D, 0x04, 0xE5, 0xC1, 0x01, 0x6F, 0xC1, 0xEB, 0x85, 
	0xC7, 0xD1, 0x14, 0x7A, 0xDA, 0xAB, 0x41, 0x4D, 0xB7, 0x4B, 
	0xC0, 0x91, 0x36, 0x56, 0x14, 0x2F, 0x7E, 0x17, 0x0E, 0x31, 
	0xE8, 0xD5, 0xA9, 0xD2, 0x67, 0x41, 0xC2, 0x24, 0x90, 0xF7, 
	0x15, 0x3B, 0x38, 0x28, 0x44, 0x3A, 0x1B, 0xE8, 0x14, 0x96, 
	0xB3, 0x41, 0xF6, 0x6E, 0xA8, 0x4A, 0xAE, 0xF4, 0x31, 0x5F, 
	0xED, 0x8A, 0x1F, 0x62, 0x51, 0xB0, 0x3A, 0xFC, 0x4E, 0x9F, 
	0xB1, 0x7D, 0x9D, 0x4C, 0x5B, 0x48, 0xB7, 0x14, 0x1A, 0xE5, 
	0xB7, 0xDE, 0x20, 0xCF, 0xB6, 0xFF, 0xBB, 0x62, 0xF1, 0xC3, 
	0x10, 0xE2, 0xCD, 0x85, 0x3A, 0x05, 0x76, 0xDF, 0x35, 0x19, 
	0x96, 0x47, 0x02, 0x91, 0xED, 0x81, 0x3F, 0xBC, 0x63, 0x57, 
	0xAC, 0x8D, 0xBE, 0x07, 0xAE, 0x70, 0x47, 0xDE, 0x58, 0x2C, 
	0xC8, 0x3B, 0x3F, 0xF1, 0x27, 0x7E, 0xE0, 0xA7, 0x90, 0x0B, 
	0xE9, 0x19, 0xDE, 0xDC, 0x7D, 0x3F, 0x89, 0xDD, 0x81, 0xA3, 
	0xDE, 0x60, 0x33, 0x59, 0x0B, 0xC0, 0xC3, 0x86, 0x04, 0xE0, 
	0xF6, 0xFB, 0xF1, 0xA3, 0xC6, 0x1F, 0x06, 0xA3, 0xB1, 0xA2, 
	0xE6, 0x36, 0x1D, 0xE0, 0x13, 0xD2, 0x10, 0xD6, 0xA7, 0xC7, 
	0x11, 0x52, 0x1B, 0x9F, 0x56, 0xFA, 0xBD, 0xD1, 0x58, 0xCD, 
	0xD3, 0x4D, 0xFF, 0xDF, 0xA3, 0xD6, 0xDC, 0xF7, 0x3C, 0x16, 
	0x16, 0x12, 0x3D, 0x2D, 0xE4, 0x82, 0x1A, 0x90, 0x4B, 0xD6, 
	0xB2, 0xA3, 0x26, 0xB9, 0x44, 0x45, 0xDD, 0xFD, 0xB4, 0xA6, 
	0x3C, 0xDE, 0xC7, 0x7E, 0xCA, 0x2E, 0x86, 0xC3, 0xDA, 0x5A, 
	0x58, 0x27, 0x8B, 0x06, 0x98, 0x0A, 0x72, 0x4D, 0x40, 0xAE, 
	0xC9, 0xF1, 0xFB, 0xAF, 0xB9, 0x64, 0x13, 0x1E, 0xFB, 0x00, 
	0xC1, 0x70, 0xB3, 0xC7, 0x27, 0xDA, 0xC1, 0xC1, 0xD5, 0xC7, 
	0x37, 0x18, 0x54, 0x39, 0xAC, 0xA1, 0x13, 0xB8, 0xC6, 0x63, 
	0x0D, 0xA4, 0xD0, 0xD1, 0x9C, 0xFC, 0x59, 0x79, 0x2C, 0xA4, 
	0x42, 0xCF, 0xBF, 0xCB, 0x97, 0x0D, 0xC4, 0xD0, 0x13, 0x05, 
	0x9C, 0x03, 0x89, 0x2B, 0x17, 0xC7, 0x07, 0xFE, 0xFE, 0x71, 
	0x29, 0x1F, 0xF6, 0x7D, 0x10, 0xE1, 0x91, 0x47, 0x6E, 0x85, 
	0x0A, 0x25, 0xED, 0x09, 0x25, 0x6D, 0x9F, 0x13, 0xF3, 0xD4, 
	0x99, 0x30, 0xC0, 0x44, 0xF5, 0x21, 0xFC, 0x70, 0x2D, 0x3C, 
	0x72, 0xA7, 0x3C, 0xEA, 0xBD, 0x11, 0x1E, 0x45, 0xC3, 0xFF, 
	0x63, 0xD5, 0x80, 0x67, 0x1B, 0x9E, 0x71, 0x6B, 0x6A, 0xC2, 
	0x73, 0x1B, 0xCA, 0xEB, 0xB6, 0x35, 0x56, 0xAD, 0xC2, 0x1C, 
	0xBB, 0x37, 0xEA, 0x68, 0x6A, 0x07, 0x9E, 0x5A, 0xBD, 0x51, 
	0x0B, 0x6F, 0x2D, 0xC7, 0x6A, 0x1B, 0xC6, 0xE1, 0x51, 0xB7, 
	0xE0, 0x59, 0xD7, 0x7A, 0x23, 0x78, 0xC3, 0x41, 0x2D, 0x8E, 
	0x1D, 0xA4, 0xDE, 0xC5, 0x1B, 0x31, 0xEC, 0xD8, 0x34, 0x0D, 
	0x1E, 0x00, 0xD3, 0xA0, 0xB9, 0x80, 0x68, 0xD1, 0x50, 0x57, 
	0x0C, 0x19, 0x88, 0x0D, 0x6C, 0xF1, 0x96, 0xCD, 0x00, 0x64, 
	0xBC, 0x7E, 0x43, 0x09, 0x0C, 0x10, 0xCD, 0x06, 0x11, 0x08, 
	0x6E, 0x12, 0xDC, 0x26, 0x89, 0x41, 0xB4, 0x56, 0xDB, 0xE6, 
	0x70, 0x9B, 0xE0, 0xD0, 0x85, 0x67, 0x12, 0x0E, 0x26, 0x75, 
	0xE0, 0x19, 0xB8, 0xD8, 0x78, 0xA3, 0x89, 0x73, 0x3A, 0x40, 
	0x9F, 0x10, 0x81, 0xA3, 0x6D, 0x9A, 0xA0, 0x27, 0x72, 0xB4, 
	0x60, 0x73, 0x01, 0x33, 0x4D, 0xE0, 0x68, 0xC0, 0xE6, 0xA2, 
	0xDD, 0x69, 0x43, 0x07, 0x58, 0xC2, 0x03, 0x88, 0xA1, 0x43, 
	0x07, 0xCD, 0x61, 0xC1, 0x9E, 0xC3, 0x40, 0x14, 0x60, 0x6A, 
	0x6B, 0xB0, 0xDD, 0xB0, 0x0C, 0xE8, 0x74, 0x70, 0x04, 0x24, 
	0x43, 0x85, 0xCC, 0x2E, 0x2A, 0x0F, 0x06, 0x43, 0xA2, 0x60, 
	0x49, 0x84, 0xD9, 0xF0, 0x6C, 0xA1, 0x1E, 0x28, 0xA3, 0x8D, 
	0x1C, 0xA0, 0x63, 0x51, 0x07, 0xE8, 0x98, 0xED, 0x36, 0x00, 
	0xB1, 0x03, 0x12, 0x77, 0x6C, 0x5D, 0x35, 0x5B, 0xC0, 0xAE, 
	0x05, 0x38, 0x40, 0x10, 0x38, 0x80, 0xEE, 0x2D, 0x9D, 0x77, 
	0x0C, 0xBC, 0xB0, 0x6C, 0xC3, 0x48, 0x57, 0x58, 0x1D, 0xE1, 
	0x60, 0x76, 0x34, 0x74, 0x1B, 0x5D, 0x67, 0xB4, 0xE8, 0x1E, 
	0xB2, 0x83, 0x0C, 0x61, 0x4F, 0x64, 0xA0, 0xAC, 0x1D, 0x98, 
	0xD4, 0x69, 0x1B, 0xAA, 0xD5, 0x69, 0x8D, 0x61, 0x26, 0x60, 
	0xA0, 0x58, 0x88, 0xD2, 0xD5, 0xA9, 0x03, 0x0F, 0x84, 0xAB, 
	0x8D, 0x9F, 0xFA, 0xC9, 0xBD, 0x9F, 0xBA, 0xF3, 0x2C, 0xAC, 
	0x2D, 0x08, 0x53, 0x8F, 0x4D, 0x9D, 0x55, 0x90, 0xF6, 0xB0, 
	0x68, 0x18, 0xE5, 0xF0, 0xF1, 0x48, 0x1F, 0x2B, 0x59, 0x04, 
	0x43, 0x55, 0x27, 0xC7, 0x78, 0x26, 0xA1, 0x3E, 0x7E, 0xEF, 
	0x89, 0x29, 0xFA, 0xB8, 0x51, 0x9A, 0xAE, 0x8D, 0x8F, 0x0C, 
	0xF5, 0x21, 0x1B, 0x35, 0x2A, 0xA3, 0x3A, 0x8E, 0xC6, 0xDF, 
	0x7B, 0xB0, 0xB3, 0x8B, 0x1F, 0xF0, 0x97, 0xD7, 0x49, 0x15, 
	0x0A, 0xEA, 0x9C, 0xB6, 0x44, 0xBD, 0x0A, 0xEA, 0x93, 0x48, 
	0xED, 0x45, 0x71, 0x5C, 0x3F, 0xA6, 0xDD, 0xCA, 0xA3, 0x5B, 
	0x90, 0x48, 0x75, 0x0B, 0x02, 0xA8, 0x71, 0x95, 0xFC, 0x91, 
	0x01, 0x15, 0xB4, 0x30, 0x00, 0x56, 0xAA, 0xB4, 0x99, 0x10, 
	0x05, 0xBF, 0x87, 0x85, 0xAC, 0x9A, 0xAF, 0xEC, 0xFC, 0x11, 
	0x2D, 0xE4, 0x3A, 0xC0, 0x1C, 0x82, 0xBE, 0x8C, 0x33, 0xAC, 
	0xED, 0x34, 0x4C, 0xAD, 0xC2, 0xB8, 0x61, 0x6A, 0x4A, 0xC5, 
	0x3A, 0x55, 0x5B, 0x37, 0x6C, 0x9A, 0xF2, 0x53, 0x13, 0x01, 
	0xA9, 0x1D, 0x56, 0x02, 0x0A, 0xF8, 0x5A, 0x2D, 0x69, 0xD1, 
	0x9F, 0x40, 0x31, 0x7F, 0xDB, 0x27, 0x05, 0x60, 0xDD, 0xF1, 
	0xD6, 0x10, 0xAD, 0xB5, 0xBF, 0x42, 0x55, 0x43, 0x9A, 0x25, 
	0x5D, 0x5A, 0x46, 0xD3, 0x16, 0xD2, 0x42, 0x5D, 0x98, 0x89, 
	0xA7, 0x1B, 0xF6, 0xF3, 0xF2, 0xE8, 0x42, 0x0E, 0x53, 0xB4, 
	0xF6, 0xFE, 0xF2, 0x10, 0xC7, 0x82, 0x08, 0xF5, 0x6A, 0xB0, 
	0x99, 0x60, 0x8D, 0x4C, 0x24, 0xC3, 0xCE, 0x45, 0xD2, 0x7E, 
	0x62, 0xA2, 0xF6, 0xFE, 0x22, 0x18, 0xE0, 0xA1, 0xE7, 0x24, 
	0xB0, 0x1A, 0xED, 0x4E, 0x6E, 0x16, 0xCB, 0x58, 0x9B, 0xC5, 
	0x6E, 0x3F, 0x2F, 0x43, 0x77, 0x87, 0x0C, 0x7B, 0x45, 0xBC, 
	0xDE, 0xEE, 0x6C, 0x50, 0x57, 0x7F, 0x85, 0x9E, 0xD6, 0xFA, 
	0x97, 0xD2, 0x33, 0xAD, 0xE7, 0x95, 0xEF, 0xFC, 0x8A, 0xF2, 
	0xDD, 0x4D, 0xDD, 0x8B, 0xC4, 0xCD, 0x5D, 0xC4, 0xB7, 0x78, 
	0xD7, 0x2E, 0x39, 0xB7, 0xA1, 0xE7, 0xD1, 0xB4, 0x5E, 0x7E, 
	0xE6, 0x96, 0x60, 0xDA, 0x61, 0x9A, 0x4D, 0x06, 0x75, 0x5B, 
	0xC3, 0x95, 0xFC, 0x4F, 0x78, 0x14, 0x55, 0xB2, 0x77, 0x25, 
	0xA5, 0xAD, 0xF6, 0xAA, 0xEB, 0x10, 0xB3, 0x15, 0x9B, 0x75, 
	0x7E, 0x41, 0x09, 0xBC, 0x54, 0x29, 0xA9, 0xD0, 0xB5, 0xB7, 
	0x24, 0x30, 0xA3, 0x90, 0x12, 0xBA, 0xBF, 0xC8, 0xAD, 0xAE, 
	0x97, 0x96, 0x7D, 0xA3, 0xAD, 0x6D, 0x61, 0xA8, 0xB7, 0xD7, 
	0x0C, 0xAD, 0x9F, 0xD8, 0x4F, 0xFF, 0xC7, 0xF1, 0x46, 0xC6, 
	0xFC, 0x45, 0xFB, 0xE9, 0x15, 0xFB, 0xA1, 0xA9, 0xFE, 0x8D, 
	0x06, 0xEC, 0x94, 0x73, 0xA6, 0x61, 0xEF, 0x60, 0xF8, 0x12, 
	0x03, 0xBE, 0xE0, 0x25, 0xA2, 0x57, 0x17, 0x55, 0x97, 0xDE, 
	0x77, 0x36, 0xF2, 0xB6, 0xF3, 0xD0, 0x5F, 0xC7, 0x7E, 0x67, 
	0x33, 0x57, 0xBC, 0xC0, 0xB4, 0xE5, 0xF4, 0xDC, 0x68, 0xB7, 
	0x9A, 0xF6, 0x06, 0x37, 0xA3, 0x98, 0x96, 0xCD, 0xE7, 0x15, 
	0x6D, 0xED, 0xAF, 0xA8, 0x55, 0x71, 0x6B, 0x5B, 0xDF, 0xE0, 
	0x8C, 0xB5, 0x65, 0x6E, 0x62, 0xE3, 0x97, 0x52, 0x6C, 0xDD, 
	0x34, 0xCA, 0xAB, 0xBA, 0xD1, 0x31, 0x5E, 0x14, 0x98, 0xFB, 
	0x51, 0xAD, 0xEF, 0xA2, 0x5A, 0xB4, 0x52, 0xF7, 0x05, 0x45, 
	0x52, 0xBB, 0xBC, 0x94, 0x0D, 0x2B, 0xAF, 0x21, 0xEC, 0xDC, 
	0x2B, 0xD6, 0x96, 0x78, 0x2F, 0x9C, 0x5A, 0x08, 0xA0, 0x09, 
	0xDB, 0xC7, 0x25, 0x6C, 0x1A, 0xF1, 0x58, 0x4C, 0x11, 0x07, 
	0x19, 0x2C, 0xDB, 0x44, 0x4D, 0xB3, 0x4D, 0x54, 0x56, 0x39, 
	0xA6, 0xEC, 0x7B, 0x45, 0x94, 0xD2, 0xAA, 0xB0, 0xCC, 0x7A, 
	0x4B, 0xFB, 0xCF, 0x69, 0x03, 0x7E, 0x32, 0x1A, 0x50, 0x97, 
	0x11, 0x56, 0xC3, 0x09, 0xDD, 0x79, 0x14, 0xCB, 0x3D, 0x79, 
	0x01, 0x7B, 0x53, 0x34, 0x99, 0x38, 0xC0, 0xE5, 0x67, 0xC0, 
	0xD3, 0x28, 0x4C, 0x1B, 0xF7, 0xFC, 0x50, 0xBF, 0x27, 0x4F, 
	0xA2, 0xC0, 0xCB, 0x80, 0x78, 0x7A, 0x0E, 0x20, 0xD3, 0x96, 
	0xA1, 0x94, 0xF5, 0x9A, 0x48, 0x0B, 0x3F, 0x3B, 0x80, 0x8D, 
	0xF2, 0x80, 0x8D, 0xA6, 0xE3, 0xB5, 0x5F, 0xBC, 0x8A, 0xAA, 
	0xCF, 0xCB, 0xBD, 0x59, 0x80, 0xD7, 0xAD, 0x67, 0x8B, 0xCC, 
	0xD3, 0x4A, 0xBF, 0x5A, 0x5C, 0x42, 0x05, 0x5A, 0x07, 0xB7, 
	0x6F, 0x6A, 0x25, 0x14, 0xC0, 0x4F, 0x4F, 0xF2, 0x43, 0xEA, 
	0xEC, 0x24, 0xBC, 0x7A, 0x4E, 0xDD, 0x5A, 0xE2, 0x95, 0x0F, 
	0x79, 0xBF, 0x11, 0xC5, 0xF8, 0x19, 0x66, 0x4F, 0x4C, 0xD9, 
	0xD4, 0x7E, 0x52, 0xD7, 0x77, 0x2A, 0xDF, 0xDF, 0x6B, 0xFF, 
	0x5C, 0xD8, 0x1E, 0xCF, 0x4D, 0x59, 0xE9, 0xC3, 0x2E, 0x66, 
	0x56, 0x38, 0x60, 0x3C, 0x3C, 0xC6, 0x73, 0x28, 0x89, 0x4E, 
	0x17, 0x06, 0x6B, 0x5D, 0xA0, 0x28, 0x5C, 0x7E, 0xEF, 0x17, 
	0x1C, 0xD6, 0x0B, 0xE9, 0x7C, 0xB1, 0x8F, 0x37, 0xC1, 0xBE, 
	0xEB, 0x04, 0x0D, 0x27, 0xF0, 0x67, 0x61, 0x2F, 0x8D, 0x96, 
	0x7D, 0xF9, 0xE4, 0xF5, 0x61, 0xBD, 0x06, 0x92, 0x2A, 0xF5, 
	0x43, 0xE9, 0x20, 0x9C, 0x24, 0xCB, 0xBE, 0x74, 0x7C, 0x84, 
	0x64, 0x4F, 0xA4, 0x63, 0x10, 0x4C, 0xF2, 0xBD, 0x81, 0x1C, 
	0x4C, 0x02, 0xEF, 0x1B, 0xBF, 0x72, 0x90, 0xE8, 0xA0, 0x0D, 
	0x41, 0xF2, 0xC9, 0x61, 0x9D, 0x8E, 0x70, 0xF3, 0x38, 0x55, 
	0xEA, 0xF2, 0xF1, 0x11, 0xE0, 0x9C, 0xC8, 0x6A, 0x14, 0x06, 
	0x7E, 0xC8, 0x78, 0x68, 0xCE, 0x07, 0x1B, 0x07, 0xCD, 0x40, 
	0x10, 0x4F, 0x64, 0xC5, 0x31, 0x73, 0xD6, 0xE3, 0x07, 0x4E, 
	0x3C, 0x12, 0xF8, 0x71, 0x53, 0x4E, 0x3A, 0x3B, 0x80, 0x9E, 
	0x06, 0x91, 0x93, 0xF6, 0xE8, 0xB2, 0x58, 0x7E, 0x12, 0x07, 
	0x5B, 0x73, 0x45, 0x9D, 0x97, 0x6F, 0x58, 0xE4, 0x28, 0xBC, 
	0x65, 0x0F, 0x2B, 0xBC, 0xDD, 0xA2, 0x63, 0x90, 0x43, 0x52, 
	0x80, 0xCE, 0x14, 0x0E, 0x95, 0x82, 0xFD, 0x48, 0xFC, 0x74, 
	0xEE, 0x27, 0x4D, 0x62, 0xA7, 0xF4, 0x65, 0xE5, 0x49, 0x9C, 
	0x36, 0xFC, 0x83, 0xA3, 0x0B, 0x71, 0x04, 0x39, 0xBD, 0x90, 
	0xD5, 0xBD, 0x4E, 0x31, 0xD6, 0x67, 0xA1, 0x93, 0x78, 0x8D, 
	0xEE, 0x06, 0x31, 0x1D, 0xB1, 0x15, 0x4F, 0x71, 0x88, 0x3B, 
	0x2C, 0xFE, 0x1B, 0xCE, 0x2E, 0xA1, 0x93, 0xA7, 0xF5, 0x99, 
	0x3D, 0x7E, 0x43, 0x93, 0x1F, 0xD8, 0x43, 0xE7, 0x49, 0x51, 
	0x6F, 0x37, 0xCE, 0x54, 0xD2, 0x37, 0x68, 0x30, 0xD4, 0x8A, 
	0x6B, 0xA4, 0x6B, 0xA4, 0x06, 0x08, 0x71, 0xA3, 0x86, 0xEC, 
	0x5E, 0xFA, 0xB8, 0xC4, 0x23, 0xA5, 0x1A, 0x3F, 0x81, 0x4E, 
	0x7A, 0x12, 0x48, 0xAD, 0xFA, 0xAA, 0xA6, 0x96, 0x34, 0x1F, 
	0x0C, 0xFC, 0x53, 0xBD, 0xA7, 0x29, 0x5B, 0x4E, 0xBE, 0xD7, 
	0xD7, 0x10, 0xB7, 0x65, 0x1C, 0x3A, 0x36, 0x75, 0xD4, 0x1B, 
	0xD1, 0xDE, 0x82, 0x1A, 0x1B, 0xDE, 0x72, 0xE7, 0x78, 0x91, 
	0x4F, 0xAB, 0x2D, 0xA3, 0xC2, 0x1D, 0x07, 0x62, 0x1F, 0x2A, 
	0x6A, 0xD9, 0x45, 0xFD, 0xA2, 0x69, 0xFC, 0x25, 0x7E, 0xF5, 
	0xA3, 0xA8, 0xEB, 0x55, 0xB2, 0xB6, 0x64, 0x1A, 0x07, 0x99, 
	0xCE, 0xC5, 0x55, 0x23, 0x8B, 0xEF, 0x41, 0x03, 0x16, 0x4B, 
	0x97, 0xD7, 0x85, 0x8F, 0x8D, 0x48, 0xBE, 0xD9, 0xE6, 0xBD, 
	0xC5, 0xC9, 0xE5, 0x75, 0x0F, 0x16, 0xC5, 0xE4, 0x84, 0x5F, 
	0x61, 0xA8, 0xDC, 0x80, 0x56, 0x66, 0xBF, 0x2D, 0x17, 0x29, 
	0xC8, 0xFA, 0xF2, 0x1A, 0x3D, 0x2F, 0x1C, 0x53, 0x00, 0x94, 
	0xAE, 0x52, 0xEC, 0xE2, 0x4D, 0x0A, 0x4E, 0xBA, 0x98, 0xCE, 
	0x20, 0x55, 0x8D, 0xFC, 0xF1, 0xC6, 0x05, 0x8A, 0x7F, 0x6C, 
	0x9E, 0xCA, 0x52, 0x53, 0x82, 0x84, 0x23, 0xF7, 0x2B, 0xB7, 
	0x3C, 0xD9, 0xF5, 0x8A, 0xF8, 0x39, 0x19, 0xAE, 0x26, 0x21, 
	0x4B, 0xA5, 0x2B, 0x27, 0xB9, 0xED, 0xBD, 0x48, 0xF0, 0x84, 
	0x10, 0x0B, 0x82, 0x17, 0x00, 0x3F, 0x17, 0x5C, 0xDF, 0x4F, 
	0x70, 0xF4, 0x1F, 0x3F, 0x91, 0xE4, 0x5F, 0x95, 0x57, 0x0E, 
	0x25, 0x39, 0x10, 0xD7, 0xBD, 0x36, 0x3E, 0x19, 0x40, 0x68, 
	0x15, 0x01, 0xC7, 0x03, 0xDD, 0x2A, 0xAD, 0x3D, 0xCA, 0x8B, 
	0x45, 0xF7, 0xAE, 0x67, 0xC3, 0xBB, 0x4F, 0xB8, 0xB4, 0x98, 
	0x48, 0x8B, 0xEA, 0xC2, 0xDC, 0xB7, 0x61, 0x21, 0x13, 0xAD, 
	0xFB, 0x3C, 0x17, 0xB9, 0x73, 0xE6, 0xDE, 0x4E, 0xA2, 0xEF, 
	0x98, 0xD0, 0xC4, 0x81, 0x39, 0x8F, 0x4B, 0x98, 0x78, 0x79, 
	0x3D, 0xC9, 0x53, 0xCA, 0xC6, 0xF9, 0x2E, 0xCF, 0x2A, 0x84, 
	0xCE, 0xBC, 0xD3, 0x43, 0x71, 0x88, 0x7D, 0xD8, 0x3B, 0xE4, 
	0xE7, 0xBE, 0x87, 0x10, 0xC7, 0x4F, 0x28, 0xB6, 0x98, 0x81, 
	0x42, 0xA3, 0x01, 0xF1, 0x6A, 0x20, 0x7F, 0xC4, 0x23, 0xA3, 
	0xA2, 0xFC, 0x41, 0x75, 0x4D, 0xAF, 0x85, 0xC8, 0x7C, 0x23, 
	0x6E, 0x10, 0x7B, 0x92, 0x4F, 0xF9, 0xB7, 0x31, 0x09, 0x22, 
	0xF7, 0xB6, 0x2F, 0xAD, 0x05, 0xC3, 0x75, 0x5D, 0xDB, 0xC1, 
	0xEC, 0x54, 0x4E, 0xE6, 0xD1, 0x3D, 0x78, 0x49, 0x9C, 0x4D, 
	0x43, 0x3A, 0x27, 0x29, 0xB9, 0x4B, 0xF8, 0x34, 0xF4, 0x8F, 
	0x3E, 0x28, 0xD8, 0xD8, 0x18, 0x2B, 0xE8, 0xD2, 0xA0, 0x14, 
	0x8B, 0xD2, 0x46, 0xA8, 0x05, 0x9B, 0xA1, 0x46, 0xD2, 0x7F, 
	0xCB, 0x6E, 0x29, 0xFC, 0xB5, 0x07, 0x4A, 0xD0, 0xDD, 0x41, 
	0xB7, 0x16, 0xDD, 0xAF, 0xEB, 0x14, 0x75, 0xC1, 0xCE, 0xA8, 
	0xA3, 0x03, 0xB6, 0x8A, 0x8C, 0xB5, 0x21, 0x8B, 0x7D, 0x27, 
	0x50, 0x64, 0xFE, 0xB6, 0x0D, 0x8A, 0xB7, 0x1A, 0xEB, 0x8B, 
	0x17, 0x37, 0x2B, 0xAF, 0x76, 0xDC, 0xAE, 0xB8, 0xDC, 0x3E, 
	0xE5, 0x8B, 0x45, 0xED, 0xD5, 0x00, 0xF0, 0xBC, 0xF2, 0xFA, 
	0x9C, 0xE3, 0x12, 0xEC, 0xF3, 0xD2, 0x6E, 0x4B, 0x1A, 0x67, 
	0x41, 0x30, 0xF3, 0xDD, 0x6F, 0xF9, 0x6D, 0x25, 0xFD, 0xBA, 
	0xD9, 0x2A, 0xDC, 0x31, 0x9A, 0x65, 0xCE, 0x9E, 0x8C, 0x77, 
	0x05, 0x34, 0x3A, 0x1E, 0xD1, 0x30, 0x36, 0x2E, 0x36, 0xDA, 
	0x78, 0x50, 0x7B, 0x66, 0xF0, 0x40, 0xB7, 0x95, 0x1F, 0x85, 
	0x77, 0xE0, 0x89, 0x76, 0xAA, 0xB7, 0x20, 0xC3, 0xF7, 0xE5, 
	0xEC, 0x9D, 0xC5, 0x28, 0x71, 0xB3, 0xD2, 0x4B, 0xC2, 0xC1, 
	0x0F, 0xC0, 0x34, 0xF8, 0xEF, 0xD9, 0xAB, 0x2D, 0xBC, 0x6A, 
	0xD1, 0x5B, 0x25, 0x00, 0x86, 0x99, 0xD6, 0xD3, 0x95, 0x2D, 
	0x34, 0xA3, 0x58, 0xAA, 0x25, 0xF8, 0xCD, 0x22, 0x7E, 0xCA, 
	0xF5, 0x0F, 0x49, 0xD3, 0xBB, 0xE9, 0x89, 0x2E, 0x36, 0xB2, 
	0xFB, 0x31, 0x34, 0xF8, 0xB4, 0xBC, 0xF2, 0xF9, 0xDA, 0x16, 
	0x51, 0xAE, 0x0A, 0xEB, 0x83, 0x67, 0x77, 0x1B, 0x7F, 0xDB, 
	0x60, 0x56, 0xA1, 0x3C, 0x2B, 0xE5, 0x69, 0xF9, 0x5E, 0x8F, 
	0xA4, 0x54, 0x88, 0x40, 0x09, 0xA8, 0xF3, 0x2B, 0x73, 0x6E, 
	0xF0, 0xA9, 0xB2, 0xBE, 0xDF, 0x98, 0x6E, 0x0F, 0x95, 0x97, 
	0x0A, 0xBB, 0x26, 0xDD, 0x27, 0x7A, 0x11, 0xD9, 0x1C, 0x12, 
	0xE7, 0xB4, 0xE9, 0x78, 0x5E, 0xAD, 0xE8, 0x06, 0x78, 0x09, 
	0xCB, 0x85, 0xCB, 0xD3, 0xF9, 0x60, 0x04, 0x7E, 0x1E, 0x8B, 
	0xF5, 0x5C, 0xCE, 0xD7, 0xB8, 0xB6, 0xB3, 0x79, 0xFC, 0x1B, 
	0x03, 0xF1, 0xC7, 0x3F, 0xF0, 0x16, 0xC8, 0xE6, 0xDC, 0xE4, 
	0x39, 0x5D, 0x0C, 0x8C, 0x6E, 0x28, 0xEC, 0xB0, 0xB2, 0x73, 
	0xF0, 0xE9, 0xC7, 0x0F, 0x8D, 0xF2, 0x49, 0x69, 0x98, 0xBB, 
	0xED, 0x76, 0xF0, 0xD3, 0x18, 0xD8, 0x66, 0xDE, 0x3C, 0x3D, 
	0xF9, 0xC4, 0xE9, 0xA0, 0x62, 0xE9, 0xC1, 0xE0, 0x06, 0xE3, 
	0xA4, 0x7F, 0x0B, 0xD8, 0xA0, 0x5D, 0x71, 0xAE, 0x7A, 0x33, 
	0xCE, 0xAE, 0xB8, 0xF0, 0x1E, 0x11, 0x4C, 0x36, 0x2D, 0x86, 
	0xE8, 0x7A, 0x2A, 0xEC, 0x20, 0x65, 0x4C, 0xA5, 0x65, 0xB9, 
	0xE1, 0x7D, 0x53, 0xA4, 0x46, 0xA6, 0xBF, 0x81, 0x48, 0xBE, 
	0x05, 0x7B, 0x7A, 0xF1, 0x97, 0x60, 0xF8, 0x95, 0xA7, 0x14, 
	0x75, 0x4E, 0xB7, 0x01, 0x78, 0x07, 0x51, 0xE0, 0x36, 0xDD, 
	0x5D, 0x15, 0x11, 0x72, 0xE5, 0x92, 0xD6, 0xA5, 0x4B, 0x5A, 
	0xA5, 0x98, 0xB3, 0x70, 0xD2, 0x96, 0x9C, 0xB5, 0x3D, 0x24, 
	0x14, 0x95, 0x0D, 0xBC, 0x26, 0x0F, 0x84, 0x64, 0xE4, 0x35, 
	0x79, 0x88, 0x31, 0xEF, 0x32, 0xF4, 0xD8, 0xF7, 0x31, 0x4F, 
	0x06, 0xD9, 0xC6, 0xF3, 0x1B, 0xB0, 0x7A, 0xF6, 0x72, 0x35, 
	0x07, 0x8F, 0x26, 0x95, 0x11, 0xB0, 0x79, 0x71, 0x10, 0xBA, 
	0x1B, 0xE3, 0x98, 0xA2, 0xC0, 0x8D, 0x0C, 0x83, 0xA1, 0x96, 
	0x8B, 0xBC, 0x2D, 0xDF, 0x29, 0x07, 0x07, 0xCF, 0x8F, 0x97, 
	0x73, 0x98, 0x5A, 0xF5, 0x3C, 0x83, 0x9F, 0x3E, 0x5F, 0x56, 
	0x3B, 0xD2, 0x79, 0xCD, 0x85, 0x9D, 0x10, 0x2C, 0x8B, 0x83, 
	0x83, 0x57, 0xD3, 0x75, 0xFA, 0x3E, 0x38, 0xA0, 0x50, 0xD8, 
	0xFF, 0x06, 0x9D, 0xC8, 0xFC, 0xEC, 0x16, 0x5D, 0x5D, 0xDF, 
	0x9D, 0xAB, 0xA5, 0xF0, 0x40, 0x4B, 0xA8, 0x28, 0x6B, 0xD5, 
	0xBB, 0xD9, 0x04, 0x4C, 0xCA, 0x8F, 0x45, 0x3D, 0x36, 0xBE, 
	0x41, 0x70, 0x71, 0x69, 0x17, 0xDF, 0x49, 0x79, 0xE1, 0x35, 
	0x83, 0x85, 0x3A, 0xAB, 0x2C, 0xE4, 0x99, 0x58, 0xA4, 0xF9, 
	0xCA, 0x99, 0xF1, 0x45, 0x88, 0x38, 0xE1, 0xC0, 0xE8, 0x87, 
	0xF9, 0xC2, 0x86, 0x01, 0x96, 0xAF, 0xED, 0xB0, 0xBC, 0xB6, 
	0x69, 0x6C, 0x14, 0x8E, 0x95, 0x8D, 0xFC, 0x3B, 0xDF, 0x23, 
	0xFF, 0x82, 0x0A, 0x55, 0x77, 0xD2, 0x6F, 0xB8, 0x4E, 0x6C, 
	0xBB, 0xA7, 0xEC, 0x97, 0x8B, 0x4B, 0xE1, 0x10, 0xAE, 0x53, 
	0xEE, 0x14, 0xB6, 0x90, 0xEB, 0x94, 0x3B, 0xDF, 0x9E, 0x72, 
	0x7F, 0x49, 0xBE, 0x3D, 0xDE, 0xD3, 0x30, 0x0D, 0x9A, 0xC1, 
	0xFA, 0x4D, 0xDC, 0xDF, 0xF6, 0xD5, 0xCD, 0x5A, 0xE0, 0x3E, 
	0xDF, 0x9C, 0x9E, 0xC5, 0xB1, 0xF3, 0xD0, 0xF4, 0x13, 0x6A, 
	0x37, 0x5D, 0x01, 0x5B, 0x46, 0xFF, 0xB4, 0x0A, 0x05, 0xDF, 
	0xF6, 0xAA, 0x30, 0xD8, 0x31, 0x36, 0x6E, 0x1A, 0x3A, 0x16, 
	0x33, 0x78, 0x9E, 0x81, 0x7F, 0x60, 0x30, 0x18, 0xA0, 0xA3, 
	0xA2, 0xA9, 0x74, 0x93, 0x67, 0xF9, 0x00, 0x82, 0x27, 0x38, 
	0xAE, 0xE2, 0x66, 0xF1, 0x10, 0xF0, 0x5A, 0x6F, 0x5E, 0xC9, 
	0x99, 0x65, 0xDE, 0xC1, 0x58, 0x0D, 0xF6, 0x79, 0xBB, 0x57, 
	0x9C, 0x35, 0x18, 0x04, 0x62, 0xE7, 0x99, 0x3B, 0x6A, 0x31, 
	0xF0, 0x0F, 0x0E, 0x36, 0x84, 0xDD, 0x60, 0xB8, 0x43, 0xDA, 
	0x86, 0xCE, 0xCB, 0xDF, 0x7D, 0x27, 0x6F, 0x5A, 0x71, 0xF7, 
	0x5C, 0x7A, 0x39, 0x40, 0x78, 0xA9, 0x11, 0xBE, 0x35, 0xA7, 
	0xB5, 0x9B, 0x63, 0xED, 0xE0, 0x40, 0x7C, 0x92, 0x3E, 0xBA, 
	0x1D, 0x57, 0xCC, 0xB9, 0x1E, 0x78, 0xCE, 0x90, 0x8B, 0xFA, 
	0x7A, 0xDE, 0x2F, 0x1B, 0x11, 0x04, 0x0B, 0xEA, 0xE4, 0xEC, 
	0x9B, 0x13, 0xED, 0xC7, 0x0F, 0x7F, 0x8B, 0x25, 0x60, 0xAB, 
	0xB5, 0x01, 0xD3, 0x8B, 0xA2, 0x6F, 0x8F, 0x2B, 0x54, 0x68, 
	0x50, 0xDB, 0x32, 0x06, 0x25, 0xCE, 0x8D, 0xB2, 0x43, 0xB3, 
	0xE0, 0x5F, 0xA5, 0x8D, 0x5F, 0x90, 0xEF, 0xE6, 0x64, 0xA0, 
	0x9D, 0x1A, 0x3D, 0x7D, 0x77, 0xC0, 0x42, 0xB8, 0xEF, 0x1B, 
	0xB2, 0xD1, 0x3F, 0x92, 0x2F, 0xCA, 0xE4, 0xAB, 0xD7, 0x9F, 
	0x9E, 0xE8, 0x20, 0xF9, 0xA9, 0xF8, 0x41, 0x63, 0xF6, 0xD5, 
	0xCE, 0x63, 0x76, 0xCA, 0x43, 0x5F, 0x14, 0x16, 0xD3, 0xF6, 
	0x24, 0xF2, 0x1E, 0x1E, 0xE9, 0x20, 0x6F, 0xEA, 0x2C, 0xFC, 
	0xE0, 0xA1, 0x77, 0x86, 0x5B, 0x16, 0xF5, 0x3D, 0xE4, 0x1A, 
	0x86, 0x27, 0x79, 0x6A, 0xE2, 0x84, 0x49, 0x23, 0x81, 0x8D, 
	0xCC, 0xB4, 0xDF, 0xB8, 0x67, 0x93, 0x5B, 0x3F, 0x6D, 0x2C, 
	0x63, 0x3C, 0x9B, 0x74, 0xF1, 0x0F, 0x13, 0x1A, 0x8E, 0x77, 
	0xB3, 0x4A, 0xD2, 0x1E, 0xFB, 0xEE, 0xB8, 0x69, 0xFF, 0x09, 
	0x8F, 0x37, 0x4B, 0x7B, 0x92, 0xB9, 0x29, 0x3D, 0x4A, 0x13, 
	0x3A, 0xC6, 0xEC, 0x49, 0xAF, 0x4D, 0xFA, 0x27, 0x25, 0x51, 
	0xE0, 0x7B, 0x92, 0x0E, 0x3B, 0x2D, 0x69, 0x09, 0xC5, 0x21, 
	0x2C, 0xAE, 0x9E, 0x8D, 0x9D, 0x85, 0x13, 0xCF, 0xFC, 0xB0, 
	0x27, 0x19, 0xB6, 0xA4, 0x49, 0xF0, 0x7F, 0x5F, 0xC2, 0xBF, 
	0x35, 0x99, 0xC5, 0xD1, 0x2A, 0xF4, 0x38, 0xBB, 0xDE, 0xEB, 
	0x49, 0x17, 0xFF, 0xEB, 0x0B, 0x9A, 0x8D, 0xD8, 0xF1, 0xFC, 
	0x55, 0xC2, 0xD1, 0x37, 0xB9, 0x37, 0x83, 0x89, 0xF4, 0x98, 
	0x71, 0x07, 0x7E, 0x82, 0x33, 0x7E, 0x1F, 0x0C, 0xFF, 0xAA, 
	0x44, 0x4C, 0x24, 0xB2, 0xC1, 0x51, 0x7A, 0xCD, 0xE8, 0xDF, 
	0x5A, 0x56, 0x10, 0x8D, 0xFE, 0x5B, 0x0B, 0x9C, 0x01, 0x76, 
	0x6C, 0x8E, 0xF9, 0xD9, 0x37, 0x1D, 0x88, 0xBA, 0x0C, 0xBF, 
	0x98, 0x06, 0x4C, 0x3F, 0xE4, 0x07, 0xBE, 0x80, 0x8C, 0x5B, 
	0xCE, 0x2D, 0xB2, 0xE3, 0x91, 0x07, 0x1A, 0x6F, 0xC3, 0x04, 
	0x8E, 0xE7, 0x4E, 0xBD, 0xCE, 0x56, 0x7D, 0xA7, 0x17, 0x80, 
	0xC1, 0x4F, 0x30, 0x03, 0x36, 0x4D, 0xFB, 0x6B, 0xD3, 0x77, 
	0xE9, 0xDF, 0x36, 0xD3, 0x1B, 0x5B, 0xD5, 0xCE, 0xB5, 0xDE, 
	0x62, 0xA3, 0x6D, 0xC2, 0x06, 0x31, 0x70, 0x76, 0x03, 0xE6, 
	0xC4, 0x82, 0xF3, 0x93, 0xB4, 0x55, 0xBC, 0xB9, 0x05, 0xF3, 
	0x72, 0x47, 0x13, 0xB5, 0xCD, 0x89, 0xAF, 0x31, 0x84, 0xF3, 
	0x79, 0x8D, 0x34, 0x5A, 0x82, 0xFB, 0xE8, 0x93, 0xE0, 0x2D, 
	0x93, 0xE7, 0x06, 0xEA, 0x9C, 0x9F, 0x4C, 0x4B, 0x16, 0xCE, 
	0x2B, 0xDA, 0x5C, 0xCA, 0x8D, 0x9E, 0xB1, 0xD5, 0x20, 0xBE, 
	0x80, 0x1E, 0x46, 0x58, 0x66, 0x05, 0xDD, 0xDE, 0x6E, 0x06, 
	0x8D, 0x59, 0xDE, 0xC4, 0xEA, 0x4B, 0xBC, 0x7B, 0x8F, 0x7F, 
	0xE6, 0xB9, 0x6F, 0xF0, 0x25, 0xE7, 0xAB, 0x54, 0x7A, 0x5C, 
	0x8A, 0xBF, 0xAB, 0xEB, 0x49, 0x53, 0xFF, 0x3B, 0xF3, 0x10, 
	0x19, 0xFF, 0xB0, 0xA1, 0x27, 0x91, 0x98, 0x74, 0xCE, 0x2C, 
	0x9E, 0xB7, 0x84, 0x9E, 0x75, 0x71, 0xF6, 0xCE, 0xD6, 0x32, 
	0xEE, 0x92, 0x60, 0x9F, 0x07, 0xA2, 0x0E, 0x78, 0x12, 0x97, 
	0x7C, 0x9B, 0xBE, 0x04, 0xF3, 0xF0, 0xCF, 0xB9, 0x1D, 0x2E, 
	0x41, 0x18, 0x85, 0x80, 0xBE, 0x23, 0x4A, 0x33, 0xEB, 0x58, 
	0x40, 0x93, 0x1C, 0x23, 0x3E, 0xF3, 0x97, 0xC4, 0x67, 0xFE, 
	0x55, 0xB5, 0x71, 0xE2, 0xB6, 0xB8, 0xC5, 0x0F, 0x64, 0x1F, 
	0x0B, 0xE7, 0x41, 0xBC, 0x0A, 0x03, 0xCF, 0x35, 0x99, 0x97, 
	0x3E, 0x16, 0x8E, 0xD7, 0xFB, 0x6B, 0x85, 0x41, 0xD5, 0xE9, 
	0x74, 0xDA, 0xCF, 0x14, 0xD3, 0x24, 0x03, 0x3C, 0x64, 0xF4, 
	0x85, 0x48, 0x59, 0x77, 0xDB, 0x72, 0xE5, 0xF1, 0x5D, 0x58, 
	0xDB, 0x3C, 0xD0, 0xB7, 0xB9, 0x52, 0xAC, 0x9B, 0x6D, 0xCB, 
	0x66, 0x29, 0x3D, 0x66, 0x26, 0xCF, 0xF0, 0x0B, 0x11, 0xA5, 
	0x6F, 0x5F, 0xA1, 0xFF, 0xB5, 0x60, 0x9E, 0xEF, 0x48, 0x94, 
	0x0D, 0x21, 0x04, 0x85, 0xBF, 0x73, 0xEB, 0xA2, 0xB1, 0xA5, 
	0x57, 0xFE, 0x62, 0x19, 0xC5, 0xA9, 0x13, 0x42, 0x72, 0x7C, 
	0x92, 0xE9, 0xC8, 0x9D, 0xBE, 0x32, 0x6D, 0xE8, 0xFC, 0x33, 
	0x53, 0xAC, 0x87, 0xE8, 0x13, 0xCB, 0xFE, 0xFF, 0x03, 0xEE, 
	0x5F, 0xF1, 0x46, 0xB5, 0x45, 0x00, 0x00, 
};

	// Default Controller Configuration (len=167)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x00, 0x95, 0x06, 0x05, 0x61, 0x00, 0x00, 0x00, 0x00, 0x06, 
	0x05, 0x61, 0x00, 0x00, 0x00, 0x00, 0x06, 0x05, 0x61, 0x02, 
	0x01, 0x00, 0x00, 0x06, 0x05, 0x61, 0x02, 0x00, 0x00, 0x00, 
	0x06, 0x05, 0x61, 0x01, 0x01, 0x00, 0x00, 0x06, 0x05, 0x61, 
	0x01, 0x00, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 
	0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 
	0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 
	0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 
	0x03, 0x02, 0x00, 0x00, 0x05, 0x04, 0x4F, 0x00, 0x01, 0x01, 
	0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x0F, 0x06, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 
	0xFF, 0xC0, 0xA8, 0x0A, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 0x05, 
	0x01, 0xC0, 0xA8, 0x0A, 0xF0, 0x00, 0x00, 
};

#endif


#define SK_HWEN_STDOLEDDISPLAY 1
#define SK_HWEN_SLIDER 1
#define SK_HWEN_SSWMENU 1
SkaarhojBI8 buttons;
SkaarhojBI8 buttons2;