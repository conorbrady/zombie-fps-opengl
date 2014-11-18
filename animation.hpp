#include <vector>
#include <assimp/scene.h>

#define GLM_FORCE_RADIANS

#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/matrix_interpolation.hpp>
#include <glm/gtc/type_ptr.hpp>

using namespace std;
using namespace glm;

// Encapsulation of an interpolatable animation of a set of key framed matrices.
// Allows for easy access to an interpolated transform matrix given a time in
// the animation.

class Animation {
private:

	// The duration of the animation
	float _duration;

	// The position keys of the animation
	vector<aiVectorKey> _positionKeys;

	// The rotation keys of the animation
	vector<aiQuatKey> _rotationKeys;

	// The scaling keys of the animation
	vector<aiVectorKey> _scalingKeys;
public:

	Animation(aiNodeAnim* animation, float _duration);
	mat4 getTransformAtTime(float time);
};
