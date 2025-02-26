using Amount = uint64
using BlockDuration = uint64
using BlockFeeMultiplier = uint32
using Difficulty = uint64
using FinalizationEpoch = uint32
using FinalizationPoint = uint32
using Height = uint64
using Importance = uint64
using ImportanceHeight = uint64
using UnresolvedMosaicId = uint64
using MosaicId = uint64
using Timestamp = uint64

using UnresolvedAddress = binary_fixed(24)
using Address = binary_fixed(24)
using Hash256 = binary_fixed(32)
using Hash512 = binary_fixed(64)
using PublicKey = binary_fixed(32)
using VotingPublicKey = binary_fixed(32)
using Signature = binary_fixed(64)

# binary layout for a mosaic
struct Mosaic
	# mosaic identifier
	mosaic_id = MosaicId

	# mosaic amount
	amount = Amount

# binary layout for an unresolved mosaic
struct UnresolvedMosaic
	# mosaic identifier
	mosaic_id = UnresolvedMosaicId

	# mosaic amount
	amount = Amount

# enumeration of link actions
enum LinkAction : uint8
	# unlink account
	UNLINK = 0x00

	# link account
	LINK = 0x01
