import "transaction.cats"

# binary layout for a vrf key link transaction
struct VrfKeyLinkTransactionBody
	# linked public key
	linkedPublicKey = PublicKey

	# link action
	linkAction = LinkAction

# binary layout for a non-embedded vrf key link transaction
struct VrfKeyLinkTransaction
	const uint8 transaction_version = 1
	const TransactionType transaction_type = vrf_key_link

	inline Transaction
	inline VrfKeyLinkTransactionBody

# binary layout for an embedded vrf key link transaction
struct EmbeddedVrfKeyLinkTransaction
	const uint8 transaction_version = 1
	const TransactionType transaction_type = vrf_key_link

	inline EmbeddedTransaction
	inline VrfKeyLinkTransactionBody
