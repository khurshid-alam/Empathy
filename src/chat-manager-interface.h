/*
 * Generated by gdbus-codegen 2.53.5. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __CHAT_MANAGER_INTERFACE_H__
#define __CHAT_MANAGER_INTERFACE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.Empathy.ChatManager */

#define EMPATHY_GEN_TYPE_CHAT_MANAGER (empathy_gen_chat_manager_get_type ())
#define EMPATHY_GEN_CHAT_MANAGER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EMPATHY_GEN_TYPE_CHAT_MANAGER, EmpathyGenChatManager))
#define EMPATHY_GEN_IS_CHAT_MANAGER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EMPATHY_GEN_TYPE_CHAT_MANAGER))
#define EMPATHY_GEN_CHAT_MANAGER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), EMPATHY_GEN_TYPE_CHAT_MANAGER, EmpathyGenChatManagerIface))

struct _EmpathyGenChatManager;
typedef struct _EmpathyGenChatManager EmpathyGenChatManager;
typedef struct _EmpathyGenChatManagerIface EmpathyGenChatManagerIface;

struct _EmpathyGenChatManagerIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_undo_closed_chat) (
    EmpathyGenChatManager *object,
    GDBusMethodInvocation *invocation,
    gint64 arg_User_Time);

};

GType empathy_gen_chat_manager_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *empathy_gen_chat_manager_interface_info (void);
guint empathy_gen_chat_manager_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void empathy_gen_chat_manager_complete_undo_closed_chat (
    EmpathyGenChatManager *object,
    GDBusMethodInvocation *invocation);



/* D-Bus method calls: */
void empathy_gen_chat_manager_call_undo_closed_chat (
    EmpathyGenChatManager *proxy,
    gint64 arg_User_Time,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean empathy_gen_chat_manager_call_undo_closed_chat_finish (
    EmpathyGenChatManager *proxy,
    GAsyncResult *res,
    GError **error);

gboolean empathy_gen_chat_manager_call_undo_closed_chat_sync (
    EmpathyGenChatManager *proxy,
    gint64 arg_User_Time,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define EMPATHY_GEN_TYPE_CHAT_MANAGER_PROXY (empathy_gen_chat_manager_proxy_get_type ())
#define EMPATHY_GEN_CHAT_MANAGER_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EMPATHY_GEN_TYPE_CHAT_MANAGER_PROXY, EmpathyGenChatManagerProxy))
#define EMPATHY_GEN_CHAT_MANAGER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EMPATHY_GEN_TYPE_CHAT_MANAGER_PROXY, EmpathyGenChatManagerProxyClass))
#define EMPATHY_GEN_CHAT_MANAGER_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EMPATHY_GEN_TYPE_CHAT_MANAGER_PROXY, EmpathyGenChatManagerProxyClass))
#define EMPATHY_GEN_IS_CHAT_MANAGER_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EMPATHY_GEN_TYPE_CHAT_MANAGER_PROXY))
#define EMPATHY_GEN_IS_CHAT_MANAGER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EMPATHY_GEN_TYPE_CHAT_MANAGER_PROXY))

typedef struct _EmpathyGenChatManagerProxy EmpathyGenChatManagerProxy;
typedef struct _EmpathyGenChatManagerProxyClass EmpathyGenChatManagerProxyClass;
typedef struct _EmpathyGenChatManagerProxyPrivate EmpathyGenChatManagerProxyPrivate;

struct _EmpathyGenChatManagerProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  EmpathyGenChatManagerProxyPrivate *priv;
};

struct _EmpathyGenChatManagerProxyClass
{
  GDBusProxyClass parent_class;
};

GType empathy_gen_chat_manager_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EmpathyGenChatManagerProxy, g_object_unref)
#endif

void empathy_gen_chat_manager_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
EmpathyGenChatManager *empathy_gen_chat_manager_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
EmpathyGenChatManager *empathy_gen_chat_manager_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void empathy_gen_chat_manager_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
EmpathyGenChatManager *empathy_gen_chat_manager_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
EmpathyGenChatManager *empathy_gen_chat_manager_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define EMPATHY_GEN_TYPE_CHAT_MANAGER_SKELETON (empathy_gen_chat_manager_skeleton_get_type ())
#define EMPATHY_GEN_CHAT_MANAGER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EMPATHY_GEN_TYPE_CHAT_MANAGER_SKELETON, EmpathyGenChatManagerSkeleton))
#define EMPATHY_GEN_CHAT_MANAGER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EMPATHY_GEN_TYPE_CHAT_MANAGER_SKELETON, EmpathyGenChatManagerSkeletonClass))
#define EMPATHY_GEN_CHAT_MANAGER_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EMPATHY_GEN_TYPE_CHAT_MANAGER_SKELETON, EmpathyGenChatManagerSkeletonClass))
#define EMPATHY_GEN_IS_CHAT_MANAGER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EMPATHY_GEN_TYPE_CHAT_MANAGER_SKELETON))
#define EMPATHY_GEN_IS_CHAT_MANAGER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EMPATHY_GEN_TYPE_CHAT_MANAGER_SKELETON))

typedef struct _EmpathyGenChatManagerSkeleton EmpathyGenChatManagerSkeleton;
typedef struct _EmpathyGenChatManagerSkeletonClass EmpathyGenChatManagerSkeletonClass;
typedef struct _EmpathyGenChatManagerSkeletonPrivate EmpathyGenChatManagerSkeletonPrivate;

struct _EmpathyGenChatManagerSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  EmpathyGenChatManagerSkeletonPrivate *priv;
};

struct _EmpathyGenChatManagerSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType empathy_gen_chat_manager_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EmpathyGenChatManagerSkeleton, g_object_unref)
#endif

EmpathyGenChatManager *empathy_gen_chat_manager_skeleton_new (void);


G_END_DECLS

#endif /* __CHAT_MANAGER_INTERFACE_H__ */
