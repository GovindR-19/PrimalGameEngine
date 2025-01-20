#pragma once

#ifdef PR_PLATFORM_WINDOWS

extern Primal::Application* Primal::CreateApplication();

int main(int argc, char** argv)
{
	Primal::Log::Init();
	PR_CORE_WARN("Initialised Log");
	int a = 5;
	PR_INFO("Hello! Var={0}", a);

	auto app = Primal::CreateApplication();
	app->Run();
	delete app;
}

#endif