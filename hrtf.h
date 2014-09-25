// SDL audio formats
const char S_AUDIO_UNKNOWN[] = "UNKNOWN";
const char S_AUDIO_S8[] = "AUDIO_S8";
const char S_AUDIO_U8[] = "AUDIO_U8";
const char S_AUDIO_S16LSB[] = "AUDIO_S16LSB";
const char S_AUDIO_S16MSB[] = "AUDIO_S16MSB";
const char S_AUDIO_S16SYS[] = "AUDIO_S16SYS";
const char S_AUDIO_U16LSB[] = "AUDIO_U16LSB";
const char S_AUDIO_U16MSB[] = "AUDIO_U16MSB";
const char S_AUDIO_U16SYS[] = "AUDIO_U16SYS";
const char S_AUDIO_S32LSB[] = "AUDIO_S32LSB";
const char S_AUDIO_S32MSB[] = "AUDIO_S32MSB";
const char S_AUDIO_S32SYS[] = "AUDIO_S32SYS";
const char S_AUDIO_F32LSB[] = "AUDIO_F32LSB";
const char S_AUDIO_F32MSB[] = "AUDIO_F32MSB";
const char S_AUDIO_F32SYS[] = "AUDIO_F32SYS";

// Holds hrtf data for a single location
typedef struct _hrtf_data {
    int azimuth;
    int elevation;
    kiss_fft_cpx* hrir_l;
    kiss_fft_cpx* hrir_r;
    kiss_fft_cpx* hrtf_l;
    kiss_fft_cpx* hrtf_r;
} hrtf_data;
