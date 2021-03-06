//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Hyunjun Jang
//  Copyright (c) 2019 AirenSoft. All rights reserved.
//
//==============================================================================
#pragma once

#include "provider.h"

namespace cfg
{
	struct RtspProvider : public Provider
	{
		CFG_DECLARE_OVERRIDED_GETTER_OF(GetType, ProviderType::Rtsp)
	};
}