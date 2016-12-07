#pragma once
#include "raft.hpp"
namespace xracksdb
{
	class raft_service
	{
	public:
		raft_service()
		{

		}

	private:
		xraft::raft raft_;
	};
}
