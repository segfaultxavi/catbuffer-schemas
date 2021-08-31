import "namespace/namespace_types.cats"
import "transaction.cats"

# binary layout for a namespace registration transaction
struct NamespaceRegistrationTransactionBody
	# namespace duration
	duration = BlockDuration if root equals registrationType

	# parent namespace identifier
	parentId = NamespaceId if child equals registrationType

	# namespace identifier
	id = NamespaceId

	# namespace registration type
	registrationType = NamespaceRegistrationType

	# namespace name size
	nameSize = uint8

	# namespace name
	name = array(uint8, nameSize)

# binary layout for a non-embedded namespace registration transaction
struct NamespaceRegistrationTransaction
	transaction_version = make_const(uint8, 1)
	transaction_type = make_const(TransactionType, namespace_registration)

	inline Transaction
	inline NamespaceRegistrationTransactionBody

# binary layout for an embedded namespace registration transaction
struct EmbeddedNamespaceRegistrationTransaction
	transaction_version = make_const(uint8, 1)
	transaction_type = make_const(TransactionType, namespace_registration)

	inline EmbeddedTransaction
	inline NamespaceRegistrationTransactionBody
