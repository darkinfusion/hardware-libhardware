// This file is autogenerated by hidl-gen. Do not edit manually.
// Source: android.hardware.sensors@1.0
// Root: android.hardware:hardware/interfaces

#ifndef HIDL_GENERATED_ANDROID_HARDWARE_SENSORS_V1_0_EXPORTED_CONSTANTS_H_
#define HIDL_GENERATED_ANDROID_HARDWARE_SENSORS_V1_0_EXPORTED_CONSTANTS_H_

#ifdef __cplusplus
extern "C" {
#endif

enum {
    SENSOR_HAL_NORMAL_MODE = 0,
    SENSOR_HAL_DATA_INJECTION_MODE = 1,
};

enum {
    SENSOR_TYPE_META_DATA = 0,
    SENSOR_TYPE_ACCELEROMETER = 1,
    SENSOR_TYPE_MAGNETIC_FIELD = 2,
    SENSOR_TYPE_ORIENTATION = 3,
    SENSOR_TYPE_GYROSCOPE = 4,
    SENSOR_TYPE_LIGHT = 5,
    SENSOR_TYPE_PRESSURE = 6,
    SENSOR_TYPE_TEMPERATURE = 7,
    SENSOR_TYPE_PROXIMITY = 8,
    SENSOR_TYPE_GRAVITY = 9,
    SENSOR_TYPE_LINEAR_ACCELERATION = 10,
    SENSOR_TYPE_ROTATION_VECTOR = 11,
    SENSOR_TYPE_RELATIVE_HUMIDITY = 12,
    SENSOR_TYPE_AMBIENT_TEMPERATURE = 13,
    SENSOR_TYPE_MAGNETIC_FIELD_UNCALIBRATED = 14,
    SENSOR_TYPE_GAME_ROTATION_VECTOR = 15,
    SENSOR_TYPE_GYROSCOPE_UNCALIBRATED = 16,
    SENSOR_TYPE_SIGNIFICANT_MOTION = 17,
    SENSOR_TYPE_STEP_DETECTOR = 18,
    SENSOR_TYPE_STEP_COUNTER = 19,
    SENSOR_TYPE_GEOMAGNETIC_ROTATION_VECTOR = 20,
    SENSOR_TYPE_HEART_RATE = 21,
    SENSOR_TYPE_TILT_DETECTOR = 22,
    SENSOR_TYPE_WAKE_GESTURE = 23,
    SENSOR_TYPE_GLANCE_GESTURE = 24,
    SENSOR_TYPE_PICK_UP_GESTURE = 25,
    SENSOR_TYPE_WRIST_TILT_GESTURE = 26,
    SENSOR_TYPE_DEVICE_ORIENTATION = 27,
    SENSOR_TYPE_POSE_6DOF = 28,
    SENSOR_TYPE_STATIONARY_DETECT = 29,
    SENSOR_TYPE_MOTION_DETECT = 30,
    SENSOR_TYPE_HEART_BEAT = 31,
    SENSOR_TYPE_DYNAMIC_SENSOR_META = 32,
    SENSOR_TYPE_ADDITIONAL_INFO = 33,
    SENSOR_TYPE_LOW_LATENCY_OFFBODY_DETECT = 34,
    SENSOR_TYPE_ACCELEROMETER_UNCALIBRATED = 35,
    SENSOR_TYPE_DEVICE_PRIVATE_BASE = 65536, // 0x10000
};

enum {
    SENSOR_FLAG_WAKE_UP = 1u, // 1
    SENSOR_FLAG_CONTINUOUS_MODE = 0u, // 0
    SENSOR_FLAG_ON_CHANGE_MODE = 2u, // 2
    SENSOR_FLAG_ONE_SHOT_MODE = 4u, // 4
    SENSOR_FLAG_SPECIAL_REPORTING_MODE = 6u, // 6
    SENSOR_FLAG_DATA_INJECTION = 16u, // 0x10
    SENSOR_FLAG_DYNAMIC_SENSOR = 32u, // 0x20
    SENSOR_FLAG_ADDITIONAL_INFO = 64u, // 0x40
    SENSOR_FLAG_DIRECT_CHANNEL_ASHMEM = 1024u, // 0x400
    SENSOR_FLAG_DIRECT_CHANNEL_GRALLOC = 2048u, // 0x800
    SENSOR_FLAG_MASK_REPORTING_MODE = 14u, // 0xE
    SENSOR_FLAG_MASK_DIRECT_REPORT = 896u, // 0x380
    SENSOR_FLAG_MASK_DIRECT_CHANNEL = 3072u, // 0xC00
};

typedef enum {
    SENSOR_FLAG_SHIFT_REPORTING_MODE = 1,
    SENSOR_FLAG_SHIFT_DATA_INJECTION = 4,
    SENSOR_FLAG_SHIFT_DYNAMIC_SENSOR = 5,
    SENSOR_FLAG_SHIFT_ADDITIONAL_INFO = 6,
    SENSOR_FLAG_SHIFT_DIRECT_REPORT = 7,
    SENSOR_FLAG_SHIFT_DIRECT_CHANNEL = 10,
} sensor_flag_shift_t;

enum {
    SENSOR_STATUS_NO_CONTACT = -1, // (-1)
    SENSOR_STATUS_UNRELIABLE = 0,
    SENSOR_STATUS_ACCURACY_LOW = 1,
    SENSOR_STATUS_ACCURACY_MEDIUM = 2,
    SENSOR_STATUS_ACCURACY_HIGH = 3,
};

enum {
    META_DATA_FLUSH_COMPLETE = 1u, // 1
};

typedef enum {
    AINFO_BEGIN = 0u, // 0
    AINFO_END = 1u, // 1
    AINFO_UNTRACKED_DELAY = 65536u, // 0x10000
    AINFO_INTERNAL_TEMPERATURE = 65537u, // 65537
    AINFO_VEC3_CALIBRATION = 65538u, // 65538
    AINFO_SENSOR_PLACEMENT = 65539u, // 65539
    AINFO_SAMPLING = 65540u, // 65540
    AINFO_CHANNEL_NOISE = 131072u, // 0x20000
    AINFO_CHANNEL_SAMPLER = 131073u, // 131073
    AINFO_CHANNEL_FILTER = 131074u, // 131074
    AINFO_CHANNEL_LINEAR_TRANSFORM = 131075u, // 131075
    AINFO_CHANNEL_NONLINEAR_MAP = 131076u, // 131076
    AINFO_CHANNEL_RESAMPLER = 131077u, // 131077
    AINFO_LOCAL_GEOMAGNETIC_FIELD = 196608u, // 0x30000
    AINFO_LOCAL_GRAVITY = 196609u, // 196609
    AINFO_DOCK_STATE = 196610u, // 196610
    AINFO_HIGH_PERFORMANCE_MODE = 196611u, // 196611
    AINFO_MAGNETIC_FIELD_CALIBRATION = 196612u, // 196612
    AINFO_CUSTOM_START = 268435456u, // 0x10000000
    AINFO_DEBUGGING_START = 1073741824u, // 0x40000000
} additional_info_type_t;

typedef enum {
    SENSOR_DIRECT_RATE_STOP = 0,
    SENSOR_DIRECT_RATE_NORMAL = 1,
    SENSOR_DIRECT_RATE_FAST = 2,
    SENSOR_DIRECT_RATE_VERY_FAST = 3,
} direct_rate_level_t;

typedef enum {
    SENSOR_DIRECT_MEM_TYPE_ASHMEM = 1,
    SENSOR_DIRECT_MEM_TYPE_GRALLOC = 2,
} direct_mem_type_t;

typedef enum {
    SENSOR_DIRECT_FMT_SENSORS_EVENT = 1,
} direct_format_t;

#ifdef __cplusplus
}
#endif

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_SENSORS_V1_0_EXPORTED_CONSTANTS_H_
