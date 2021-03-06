/*
 * Copyright Ricoh Company, Ltd. All rights reserved.
 */

#ifndef ptpip_initiator_codes_c_h
#define ptpip_initiator_codes_c_h

enum {
    // Default port
    PTPIP_DEFAULT_PORT = 15740,
    
    // EventCode
    PTPIP_CANCEL_TRANSACTION        = 0x4001,
    PTPIP_OBJECT_ADDED              = 0x4002,
    PTPIP_OBJECT_REMOVED            = 0x4003,
    PTPIP_STORE_ADDED               = 0x4004,
    PTPIP_STORE_REMOVED             = 0x4005,
    PTPIP_DEVICE_PROP_CHANGED       = 0x4006,
    PTPIP_OBJECT_INFO_CHANGED       = 0x4007,
    PTPIP_DEVICE_INFO_CHANGED       = 0x4008,
    PTPIP_REQUEST_OBJECT_TRANSFER   = 0x4009,
    PTPIP_STORE_FULL                = 0x400A,
    PTPIP_DEVICE_RESET              = 0x400B,
    PTPIP_STORAGE_INFO_CHANGED      = 0x400C,
    PTPIP_CAPTURE_COMPLETE          = 0x400D,
    PTPIP_UNREPORTED_STATUS         = 0x400E,
    
    // ReasonOfFail
    PTPIP_FAIL_REJECTED_INITIATOR   = 0x0001,
    PTPIP_FAIL_BUSY                 = 0x0002,
    PTPIP_FAIL_UNSPECIFIED          = 0x0003,
    
    // PTP/IP Protocol errors
    PTPIP_PROTOCOL_SOCKET_CLOSED    = 0xF000,
    PTPIP_PROTOCOL_BROCKEN_PACKET,
    PTPIP_PROTOCOL_REJECTED,
    PTPIP_PROTOCOL_INVALID_SESSION_ID,
    PTPIP_PROTOCOL_INVALID_TRANSACTION_ID,
    PTPIP_PROTOCOL_UNRECOGNIZED_COMMAND,
    PTPIP_PROTOCOL_INVALID_RECEIVE_STATE,
    PTPIP_PROTOCOL_INVALID_DATA_LENGTH,
    PTPIP_PROTOCOL_WATCHDOG_EXPIRED,
    
    // DevceProp: WHITE_BALANCE
    PTPIP_WHITE_BALANCE_MANUAL      = 0x0001,
    PTPIP_WHITE_BALANCE_AUTOMATIC   = 0x0002,
    PTPIP_WHITE_BALANCE_ONE_PUSH_AUTOMATIC  = 0x0003,
    PTPIP_WHITE_BALANCE_DAYLIGHT    = 0x0004,
    PTPIP_WHITE_BALANCE_TUNGSTEN1   = 0x0006,
    PTPIP_WHITE_BALANCE_FLASH       = 0x0007,
    PTPIP_WHITE_BALANCE_SHADE       = 0x8001,
    PTPIP_WHITE_BALANCE_CLOUDY      = 0x8002,
    PTPIP_WHITE_BALANCE_FLUORESCENT1 = 0x8003,
    PTPIP_WHITE_BALANCE_FLUORESCENT2 = 0x8004,
    PTPIP_WHITE_BALANCE_FLUORESCENT3 = 0x8005,
    PTPIP_WHITE_BALANCE_FLUORESCENT4 = 0x8006,
    PTPIP_WHITE_BALANCE_TUNGSTEN2   = 0x8020,

    // DevceProp: EXPOSURE_INDEX
    PTPIP_EXPOSURE_INDEX_AUTOMATIC = 0xFFFF,

    // DevceProp: SHUTTER_SPEED
    PTPIP_SHUTTER_SPEED_AUTOMATIC_DENOMINATOR = 0x0000,
    PTPIP_SHUTTER_SPEED_AUTOMATIC_NUMERATOR   = 0x0000,

    // DevceProp: FOCUS_MODE
    PTPIP_FOCUS_MODE_MANUAL          = 0x0001,
    PTPIP_FOCUS_MODE_AUTOMATIC       = 0x0002,
    PTPIP_FOCUS_MODE_AUTOMATIC_MACRO = 0x0003,

    // DevceProp: EXPOSURE_METERING_MODE
    PTPIP_EXPOSURE_METERING_MODE_AVERAGE     = 0x0001,
    PTPIP_EXPOSURE_METERING_MODE_CENTER_WEIGHTED_AVERAGE = 0x0002,
    PTPIP_EXPOSURE_METERING_MODE_MULTI_SPOT  = 0x0003,
    PTPIP_EXPOSURE_METERING_MODE_CENTER_SPOT = 0x0004,
    
    // DevceProp: FLASH_MODE
    PTPIP_FLASH_MODE_AUTO_FLASH    = 0x0001,
    PTPIP_FLASH_MODE_FLASH_OFF     = 0x0002,
    PTPIP_FLASH_MODE_FILL_FLASH    = 0x0003,
    PTPIP_FLASH_MODE_RED_EYE_AUTO  = 0x0004,
    PTPIP_FLASH_MODE_RED_EYE_FILL  = 0x0005,
    PTPIP_FLASH_MODE_EXTERNAL_SYNC = 0x0006,
    
    // DevceProp: EXPOSURE_PROGRAM_MODE
    PTPIP_EXPOSURE_PROGRAM_MODE_MANUAL            = 0x0001,
    PTPIP_EXPOSURE_PROGRAM_MODE_AUTOMATIC         = 0x0002,
    PTPIP_EXPOSURE_PROGRAM_MODE_APERTURE_PRIORITY = 0x0003,
    PTPIP_EXPOSURE_PROGRAM_MODE_SHUTTER_PRIPRITY  = 0x0004,
    PTPIP_EXPOSURE_PROGRAM_MODE_PROGRAM_CREATIVE  = 0x0005,
    PTPIP_EXPOSURE_PROGRAM_MODE_PROGRAM_ACTION    = 0x0006,
    PTPIP_EXPOSURE_PROGRAM_MODE_PORTRAIT          = 0x0007,
    
    // DevceProp: STILL_CAPTURE_MODE
    PTPIP_STILL_CAPTURE_MODE_NORMAL     = 0x0001,
    PTPIP_STILL_CAPTURE_MODE_BURST,
    PTPIP_STILL_CAPTURE_MODE_TIMELAPSE,
    PTPIP_STILL_CAPTURE_MODE_SOUND      = 0x8000,
    PTPIP_STILL_CAPTURE_MODE_NORMAL_WITH_SOUND    = PTPIP_STILL_CAPTURE_MODE_NORMAL    | PTPIP_STILL_CAPTURE_MODE_SOUND,
    PTPIP_STILL_CAPTURE_MODE_BURST_WITH_SOUND     = PTPIP_STILL_CAPTURE_MODE_BURST     | PTPIP_STILL_CAPTURE_MODE_SOUND,
    PTPIP_STILL_CAPTURE_MODE_TIMELAPSE_WITH_SOUND = PTPIP_STILL_CAPTURE_MODE_TIMELAPSE | PTPIP_STILL_CAPTURE_MODE_SOUND,
    PTPIP_STILL_CAPTURE_MODE_MOVIE      = 0x8010,
    
    // DevceProp: EFFECT_MODE
    PTPIP_EFFECT_MODE_STANDARD        = 0x0001,
    PTPIP_EFFECT_MODE_BLACK_AND_WHITE = 0x0002,
    PTPIP_EFFECT_MODE_SEPIA           = 0x0003,
    
    // DevceProp: FOCUS_METERING_MODE
    PTPIP_FOCUS_METERING_MODE_CENTER_SPOT = 0x0001,
    PTPIP_FOCUS_METERING_MODE_MULTI_SPOT  = 0x0002,
    
    // ObjectInfo: ProtectionStatus
    PTPIP_PROTECTION_STATUS_NO_PROTECTION = 0x0000,
    PTPIP_PROTECTION_STATUS_READ_ONLY     = 0x0001,
    
    // ObjectFormatCode
    PTPIP_FORMAT_IMAGES_ONLY        = 0xFFFFFFFF,
    PTPIP_FORMAT_ASSOCIATION        = 0x3001,
    PTPIP_FORMAT_TEXT               = 0x3004,
    PTPIP_FORMAT_WAV                = 0x3008,
    PTPIP_FORMAT_MP3                = 0x3009,
    PTPIP_FORMAT_AVI                = 0x300A,
    PTPIP_FORMAT_MOV                = 0x300D,
    PTPIP_FORMAT_JPEG               = 0x3801,
    PTPIP_FORMAT_PNG                = 0x380B,
    PTPIP_FORMAT_TIFF               = 0x380D,
    PTPIP_FORMAT_MPO                = 0xB800,   // MultiPictureFormat / Vendor defined code.
    PTPIP_FORMAT_ZIP                = 0xB801,   // Zipped-RAW / Vendor defined code.
    
    // AssociationTypeCode
    PTPIP_ASSOCTYPE_UNDEFINED       = 0x0000,
    PTPIP_ASSOCTYPE_GENERIC_FOLDER  = 0x0001,
    PTPIP_ASSOCTYPE_ANCILLARY_DATA  = 0x0007,
    
    // Response code
    PTPIP_RESPONSE_OK                          = 0x2001,
    PTPIP_RESPONSE_GENERAL_ERROR               = 0x2002,
    PTPIP_RESPONSE_SESSION_NOT_OPEN            = 0x2003,
    PTPIP_RESPONSE_INVALID_TRANSACTION_ID      = 0x2004,
    PTPIP_RESPONSE_OPERATION_NOT_SUPPORTED     = 0x2005,
    PTPIP_RESPONSE_PARAMETER_NOT_SUPPORTED     = 0x2006,
    PTPIP_RESPONSE_INCOMLETE_TRANSFER          = 0x2007,
    PTPIP_RESPONSE_INVALID_STORAGE_ID          = 0x2008,
    PTPIP_RESPONSE_INVALID_OBJECT_HANDLE       = 0x2009,
    PTPIP_RESPONSE_DEVICE_PROP_NOT_SUPPORTED   = 0x200A,
    PTPIP_RESPONSE_INVALID_OBJECT_FORMAT_CODE  = 0x200B,
    PTPIP_RESPONSE_STORE_FULL                  = 0x200C,
    PTPIP_RESPONSE_OBJECT_WRITE_PROTECTED      = 0x200D,
    PTPIP_RESPONSE_STORE_READ_ONLY             = 0x200E,
    PTPIP_RESPONSE_ACCESS_DENIED               = 0x200F,
    PTPIP_RESPONSE_NO_THUMBNAIL_PRESENT        = 0x2010,
    PTPIP_RESPONSE_SELFTEST_FAILED             = 0x2011,
    PTPIP_RESPONSE_PARTIAL_DELETION            = 0x2012,
    PTPIP_RESPONSE_STORE_NOT_AVAILABLE         = 0x2013,
    PTPIP_RESPONSE_SPECIFICATION_BY_FORMAT_UNSUPPORTED = 0x2014,
    PTPIP_RESPONSE_NO_VALID_OBJECT_INFO        = 0x2015,
    PTPIP_RESPONSE_INVALID_CODE_FORMAT         = 0x2016,
    PTPIP_RESPONSE_UNKNOWN_VENDOR_CODE         = 0x2017,
    PTPIP_RESPONSE_CAPTURE_ALREADY_TERMINATED  = 0x2018,
    PTPIP_RESPONSE_DEVICE_BUSY                 = 0x2019,
    PTPIP_RESPONSE_INVALID_PARENT_OBJECT       = 0x201A,
    PTPIP_RESPONSE_INVALID_DEVICE_PROP_FORMAT  = 0x201B,
    PTPIP_RESPONSE_INVALID_DEVICE_PROP_VALUE   = 0x201C,
    PTPIP_RESPONSE_INVALID_PARAMETER           = 0x201D,
    PTPIP_RESPONSE_SESSION_ALREADY_OPEN        = 0x201E,
    PTPIP_RESPONSE_TRANSACTION_CANCELED        = 0x201F,
    PTPIP_RESPONSE_SPECIFICATION_OF_DESTINATION_UNSUPPORTED  = 0x2020,
};

typedef enum {
    PTPDP_BATTERY_LEVEL             = 0x5001,   // UINT8,  Enum/Range, R
    PTPDP_FUNCTIONAL_MODE           = 0x5002,   // UINT16, Enum, R/W
    PTPDP_IMAGE_SIZE                = 0x5003,   // String, Enum/Range, R/W
    PTPDP_COMPRESSION_SETTING       = 0x5004,   // UINT8,  Enum/Range, R/W
    PTPDP_WHITE_BALANCE             = 0x5005,   // UINT16, Enum, R/W, WhiteBalanceMode
    PTPDP_RGB_GAIN                  = 0x5006,   // String, Enum/Range, R/W
    PTPDP_F_NUMBER                  = 0x5007,   // UINT16, Enum, R/W
    PTPDP_FOCAL_LENGTH              = 0x5008,   // UINT32, Enum/Range, R/W
    PTPDP_FOCUS_DISTANCE            = 0x5009,   // UINT16, Enum/Range, R/W
    PTPDP_FOCUS_MODE                = 0x500A,   // UINT16, Enum, R/W, FocusMode
    PTPDP_FLASH_MODE                = 0x500C,   // UINT16, Enum, R/W, FlashMode
    PTPDP_EXPOSURE_TIME             = 0x500D,   // UINT32, Enum/Range, R/W
    PTPDP_EXPOSURE_PROGRAM_MODE     = 0x500E,   // UINT16, Enum, R/W, ExposureProgramMode
    PTPDP_EXPOSURE_INDEX            = 0x500F,   // UINT16, Enum/Range, R/W
    PTPDP_EXPOSURE_BIAS_COMPENSATION   = 0x5010, // INT16, Enum/Range, R/W
    PTPDP_DATE_TIME                 = 0x5011,   //String, R/W, DateTime
    PTPDP_CAPTURE_DELAY             = 0x5012,   // UINT32, Enum/Range, R/W
    PTPDP_STILL_CAPTURE_MODE        = 0x5013,   // UINT16, Enum, R/W, StillCaptureMode
    PTPDP_CONTRAST                  = 0x5014,   // UINT8,  Enum/Range, R/W
    PTPDP_SHARPNESS                 = 0x5015,   // UINT8,  Enum/Range, R/W
    PTPDP_DIGITAL_ZOOM              = 0x5016,   // UINT8,  Enum/Range
    PTPDP_EFFECT_MODE               = 0x5017,   // UINT16, Enum, R/W, EffectMode
    PTPDP_BURST_NUMBER              = 0x5018,   // UINT16, Enum/Range, R/W
    PTPDP_BURST_INTERVAL            = 0x5019,   // UINT16, Enum/Range, R/W
    PTPDP_TIMELAPSE_NUMBER          = 0x501A,   // UINT16, Enum/Range, R/W
    PTPDP_TIMELAPSE_INTERVAL        = 0x501B,   // UINT32, Enum/Range, R/W
    PTPDP_FOCUS_METERING_MODE       = 0x501C,   // UINT16, Enum, R/W. FocusMeteringMode
    PTPDP_UPLOAD_URL                = 0x501D,   // String, R/W
    PTPDP_ARTIST                    = 0x501E,   // String, R/W
    PTPDP_COPYRIGHT_INFO            = 0x501F,   // String, R/W
    
    // (1.1)
    PTPDP_AUDIO_VOLUME              = 0x502C,   // UINT32, Enum/Range, R/W
    
    // Vendor-extended property
    PTPDP_ERROR_INFO                = 0xD006,   // UINT32, Bitmap, R
    PTPDP_SHUTTER_SPEED             = 0xD00F,   // UINT64(UINT32x2 rational) R/W
    
    // RICOH THETA-extended property
    PTPDP_GPS_INFO                  = 0xD801,   // String, R/W
    PTPDP_AUTO_POWEROFF_DELAY       = 0xD802,   // UINT8, Range(0..30), R/W
    PTPDP_SLEEP_DELAY               = 0xD803,   // UINT16, Range(0..1800), R/W
    PTPDP_SERVICESET_ID             = 0xD805,   // String, R/W
    PTPDP_PASSPHASE                 = 0xD806,   // String, R/W
    PTPDP_CHANNEL_NUMBER            = 0xD807,   // UINT8, Range(0, 1, 6, 11), R/W
    PTPDP_CAPTURE_STATUS            = 0xD808,   // UINT8, Range(0/1), R
    PTPDP_RECORDING_TIME            = 0xD809,   // UINT16, Range(0..179), R
    PTPDP_REMAINING_RECORDING_TIME  = 0xD80A,   // UINT16, Range(0..180), R

} PTP_DEVICE_PROP_CODE;

enum {
    // PTPDP_COUNTDOWN_NOTIFICATION_MODE
    PTPDP_COUNTDOWN_NOTIFICATION_MODE_OFF       = 0x0000,   // OFF
    PTPDP_COUNTDOWN_NOTIFICATION_MODE_LED       = 0x0001,   // LED
    PTPDP_COUNTDOWN_NOTIFICATION_MODE_BUZZER    = 0x0002,   // Buzzer
};

typedef enum {
    PTP_OBJECTHANDLE_DCF    = (1<<31),
    PTP_OBJECTHANDLE_DPS    = (1<<30),
    PTP_OBJECTHANDLE_FIRM   = (1<<29),
    PTP_OBJECTHANDLE_WAV    = (1<<28),
    PTP_OBJECTHANDLE_INTERVAL = (1<<15),
} PTP_OBJECTHANDLE_BIT;

#endif
