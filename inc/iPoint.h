namespace geo {

using coord = double;

using dim2d = struct {
	coord x = {};
	coord y = {};
};
using dim3d = struct {
	coord x = {};
	coord y = {};
	coord z = {};
};

	class iPoint2d {
	public:
		virtual ~iPoint2d() = default;

		virtual bool Move(const dim2d dim) = 0;
	};

	class iPoint3d {
	public:
		virtual ~iPoint3d() = default;

		virtual bool Move(const dim3d dim) = 0;
	};
}