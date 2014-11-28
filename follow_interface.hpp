
#ifndef FOLLOW_INTERFACE
#define FOLLOW_INTERFACE

#define GLM_FORCE_RADIANS

#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"

class IFollowable {
public:
	virtual glm::vec3 getLocation() = 0;
};

class IFollower{
public:
	virtual void addFollowable(IFollowable* followable) = 0;
};

#endif