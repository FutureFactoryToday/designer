namespace geo {

using dim = double;

	class iPoint2d {
	public:
		virtual ~iPoint2d() = default;

		virtual Move(dim x, dim y) = 0;
	}

	class iPoint3d {
	public:
		virtual ~iPoint3d() = default;

		virtual Move(dim x, dim y, dim z) = 0;
	}
}