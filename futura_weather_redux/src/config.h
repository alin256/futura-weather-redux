#ifndef futura_weather_redux_config_h
#define futura_weather_redux_config_h

enum AppMessageKey {
	REQUEST_WEATHER_KEY = 1,
	SET_WEATHER_KEY = 2,
    WEATHER_TEMPERATURE_KEY = 3,
    WEATHER_CONDITIONS_KEY = 4,
	SET_PREFERENCES_KEY = 5,
	TEMP_PREFERENCE_KEY = 6,
	WEATHER_UPDATE_PREFERENCE_KEY = 7
};

enum PersistKey {
	PREF_TEMP_FORMAT_PERSIST_KEY = 1,
	PREF_WEATHER_UPDATE_FREQ_PERSIST_KEY = 2
};

typedef enum {
	TEMP_FORMAT_CELCIUS = 1,
	TEMP_FORMAT_FAHRENHEIT = 2
} TempFormat;

#endif
