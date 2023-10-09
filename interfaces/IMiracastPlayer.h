#pragma once

#include "Module.h"

namespace WPEFramework {
namespace Exchange {

    struct EXTERNAL IMiracastPlayer : virtual public Core::IUnknown {
        enum { ID = ID_MIRACASTPLAYER };

        struct INotification : virtual public Core::IUnknown {

            enum { ID = ID_MIRACASTPLAYER_NOTIFICATION };

            ~INotification() override = default;

            virtual void MiracastPlayerEvent(const string& eventName, const string& parametersJson) = 0;
        };


        virtual ~IMiracastPlayer() {}
        virtual uint32_t Initialize() = 0;
        virtual uint32_t Deinitialize() = 0;
	virtual uint32_t playRequest(const string& parametersJson);
	virtual uint32_t stopRequest(const string& parametersJson);
	virtual uint32_t setPlayerState(const string& parametersJson);
	virtual uint32_t setVideoRectangle(const string& parametersJson);
	virtual uint32_t setVideoFormats(const string& parametersJson);
	virtual uint32_t setAudioFormats(const string& parametersJson);
	virtual uint32_t setRTSPWaitTimeout(const string& parametersJson);
	virtual uint32_t setLogging(const string& parametersJson);
    };

} // Exchange
} // WPEFramework
