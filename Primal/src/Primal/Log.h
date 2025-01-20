#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include <memory>

namespace Primal
{
	class PRIMAL_API Log
	{
	public:
		static void Init();
	
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

		
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}

//Core Log macros

#define PR_CORE_TRACE(...)	::Primal::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PR_CORE_INFO(...)	::Primal::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PR_CORE_WARN(...)	::Primal::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PR_CORE_ERROR(...)	::Primal::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PR_CORE_FATAL(...)	::Primal::Log::GetCoreLogger()->critical(__VA_ARGS__)


//Client Log Macros

#define PR_TRACE(...)	::Primal::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PR_INFO(...)	::Primal::Log::GetClientLogger()->info(__VA_ARGS__)
#define PR_WARN(...)	::Primal::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PR_ERROR(...)	::Primal::Log::GetClientLogger()->error(__VA_ARGS__)
#define PR_FATAL(...)	::Primal::Log::GetClientLogger()->critical(__VA_ARGS__)

